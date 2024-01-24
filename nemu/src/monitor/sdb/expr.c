/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/paddr.h>
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <string.h>
#include <stdlib.h>
enum {
  TK_NOTYPE = 256, TK_EQ, TK_LEFTBRACKET, TK_RIGHTBRACKET, NUM, DEREF, HEX, REGISTER, OR, AND, NEG

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
  {"\\-", '-'},           // minus
  {"\\*", '*'},         // multiply
  {"\\/", '/'},         // eliminate
  {"\\(", '('},           // left bracket
  {"\\)", ')'},           // right bracket
  {"\\|\\|", OR},         //or
  {"\\&\\&", AND},        //and
  {"0[xX][0-9a-fA-F]+", HEX},        //HEX
  {"\\$[a-zA-Z]*[0-9]*", REGISTER},       //REGISTER
  {"[0-9]*", NUM}         // num
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[4096] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;
static int num_of_token;
static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        char str_tmp[32]={'\0'};
        int j;
        switch (rules[i].token_type) {
            case '+': 
              tokens[nr_token].type='+';
              nr_token++;
            break;
            case TK_EQ:
              tokens[nr_token].type=TK_EQ;
              nr_token++;
            break;
            case '-':
              tokens[nr_token].type='-';
              nr_token++;
            break;
            case '*':
              tokens[nr_token].type='*';
              nr_token++;
            break;
            case '/':
              tokens[nr_token].type='/';
              nr_token++;
            break;
            case '(':
              tokens[nr_token].type='(';
              nr_token++;
            break;
            case ')':
              tokens[nr_token].type=')';
              nr_token++;
            break;
            case NUM:
              tokens[nr_token].type=NUM;
              for(j=0;j<substr_len;j++)
              {
                str_tmp[j]=*(substr_start+j);
              }
              str_tmp[j]='\0';
              strcpy(tokens[nr_token].str,str_tmp);
              memset(str_tmp,0,sizeof(str_tmp));
              nr_token++;
            break;
            case HEX:
              tokens[nr_token].type=HEX;
              for(j=0;j<substr_len;j++)
              {
                str_tmp[j]=*(substr_start+j);
              }
              str_tmp[j]='\0';
              strcpy(tokens[nr_token].str,str_tmp);
              memset(str_tmp,0,sizeof(str_tmp));
              nr_token++;
            break;
            case REGISTER:
              tokens[nr_token].type=REGISTER;
              for(j=0;j<substr_len;j++)
              {
                str_tmp[j]=*(substr_start+j);
              }
              str_tmp[j]='\0';
              strcpy(tokens[nr_token].str,str_tmp);
              memset(str_tmp,0,sizeof(str_tmp));
              nr_token++;
            break;
            default: 
              printf("no rules");
            break;
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  num_of_token=nr_token;
  return true;
}

bool check_parentheses(int p,int q)
{
    char bracket_stack[128];
    int top=-1,i;
    if(tokens[p].type!='('||tokens[q].type!=')')
    {
      return false;
    }
    else
    {
      p++;q--;
      if(q>p)
      {
        for(i=p;i<=q;i++)
        {
          if(tokens[i].type=='(')
          {
            bracket_stack[++top]='(';
          }
          else if(tokens[i].type==')')
          {
            if(bracket_stack[top]=='(')
            {
              top--;
            }
            else
            {
              return false;
            }
          }
        }
        if(top==-1)
        {
          return true;
        }
        else
        {
          return false;
        }
      } 
      else
      {
        return false;
      }
    }
}
/*compute the main operation position
 *scan all the ops and sort to get the main operation
 */
struct ops
{
  char op;
  int position;
};
typedef struct ops operate;
operate oop[2048];
int cmp(const void *p1,const void *p2)
{
  struct ops *a=(struct ops *)p1;
	struct ops *b=(struct ops *)p2;
	if((a->op=='*'||a->op=='/'||a->op==AND||a->op==OR)&&(b->op=='+'||b->op=='-'))
	{
		return -1;
	}
	else if((b->op=='*'||b->op=='/'||b->op==AND||b->op==OR)&&(a->op=='+'||a->op=='-'))
	{
		return 1;
	}
	else
	{
		if(a->position<b->position)
		{
			return -1;
		}
		else if(a->position>b->position)
		{
			return 1;
		}
		else
			return 0;
	}
}

int eval(int p, int q) {
  if (p > q) {
    /* Bad expression */
    assert(0);
    return -1;
  }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
    int num=atoi(tokens[p].str);
    return num;
  }
  else if (check_parentheses(p, q) == true) {
    /* The expressison is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1);
  }
  else {
    int i,cnt=0;
    int unmatched = 0;
    for(i=p;i<=q;i++)
    {
      if(tokens[i].type=='(')
      {
        unmatched ++;
      }
      else if(tokens[i].type==')')
      {
        if(unmatched != 0)
        {
          unmatched --;
        }
      }
      else if((unmatched==0)&&(tokens[i].type=='+'||tokens[i].type=='-'||tokens[i].type=='*'||tokens[i].type=='/'))
      {
        oop[cnt].op=tokens[i].type;
        oop[cnt].position=i;
        cnt++;
      }
    }
    if(cnt != 0)
    {
      qsort(oop,cnt,sizeof(operate),cmp);

      int main_op = oop[cnt-1].position;
      int op_type=tokens[main_op].type;
      int val1 = eval(p, main_op - 1);
      int val2 = eval(main_op + 1, q);

      cnt = 0;
      for(i = 0; i < 128; i ++)
      {
        oop[i].op = 0;
        oop[i].position = 0;
      }
      switch (op_type) {
        case '+': return val1 + val2;
        case '-': return val1 - val2;
        case '*': return val1 * val2;
        case '/': assert(val2 != 0); return val1 / val2;
        case AND: return val1 && val2;
        case OR : return val1 || val2;
        default: assert(0);
      }
    }else {
      return atoi(tokens[p+1].str);
    }
  }
}
char transition_str[32] = {'\0'};
int transition_len;
word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  int i , j;
  int tmp;
  for(i = 0; i < nr_token; i ++)
  {
    if((tokens[i].type=='-')&&((i==0)||(tokens[i-1].type!= NUM &&tokens[i-1].type!= HEX && tokens[i-1].type!=REGISTER && tokens[i+1].type==NUM && tokens[i-1].type!=')')))
    {
      tokens[i].type = NEG;
      tmp = atoi(tokens[i+1].str);
      j = 0;
      do{
        tokens[i].str[j++] = tmp % 10 + '0';
        tmp /= 10;
      }while(tmp);
      tokens[i].str[j] = '\0';
      transition_len = strlen(tokens[i].str);
      for(j = 0; j < transition_len; j++)
      {
        transition_str[j] = tokens[i].str[transition_len - 1 - j];
      }
      tokens[i].str[0]='-';
      for(j = 0; j < transition_len; j++)
      {
        tokens[i].str[j+1] = transition_str[j];
      }
      tokens[i].str[j+1] = '\0';
      memset(transition_str, 0, sizeof(transition_str));
      tokens[i].type = NUM;
      for(j = i+1; j < nr_token-1; j++)
      {
        tokens[j] = tokens[j+1];
      }
      nr_token--;
      num_of_token = nr_token;
    }
  }

  for(i = 0; i < nr_token; i ++){
    if(tokens[i].type == HEX)
    {
      tmp = strtol(tokens[i].str , NULL, 16);
      j = 0;
      do{
        tokens[i].str[j++] = tmp % 10 + '0';
        tmp /= 10;
      }while(tmp);
      tokens[i].str[j] = '\0';
      transition_len = strlen(tokens[i].str);
      for(j = 0; j < transition_len; j++)
      {
        transition_str[j] = tokens[i].str[transition_len - 1 - j];
      }
      strcpy(tokens[i].str, transition_str);
      memset(transition_str, 0, sizeof(transition_str));
      tokens[i].type = NUM;
    }
  }

  j = 0;
  uint32_t regis_value;
  for(i = 0; i < nr_token; i++){
    if(tokens[i].type == REGISTER)
    {
      bool flag;
      int regis_len = strlen(tokens[i].str);
      char regis_name[32] = {'\0'};
      for(j = 1; j < regis_len; j++)
      {
        regis_name[j-1] = tokens[i].str[j]; 
      }
      j = 0;
      if(strcmp(regis_name,"pc")==0)
      {
        regis_value = cpu.pc;
        flag = true;
      }
      else
      {
        regis_value = isa_reg_str2val(regis_name , &flag);
      }
      if(flag)
      {
        do{
          tokens[i].str[j++] = regis_value % 10 + '0';
          regis_value /= 10;
        }while(regis_value);
        tokens[i].str[j] = '\0';
        transition_len = strlen(tokens[i].str);
        for(j = 0; j < transition_len; j++)
        {
          transition_str[j] = tokens[i].str[transition_len - 1 - j];
        }
        strcpy(tokens[i].str, transition_str);
        memset(transition_str, 0, sizeof(transition_str));
        tokens[i].type = NUM;
      }
      else
      {
        assert(0);
      }
    }
  }

  int length_tokens = nr_token;
  int deref_value;
  for (i = 0; i < nr_token; i ++) {
    if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type == '+' || tokens[i - 1].type == '-' || tokens[i - 1].type == '*' || tokens[i - 1].type == '/' || tokens[i - 1].type == '(' || tokens[i - 1].type == TK_EQ)) {
      tokens[i].type = DEREF;
      tmp = atoi(tokens[i+1].str);
      uintptr_t ptr = (uintptr_t)tmp;
      deref_value = paddr_read(ptr,4);
      j = 0;
      do{
          tokens[i+1].str[j++] = deref_value % 10 ;
          deref_value /= 10;
        }while(deref_value);
      tokens[i+1].str[j] = '\0';
      transition_len = strlen(tokens[i+1].str);
        for(j = 0; j < transition_len; j++)
        {
          transition_str[j] = tokens[i+1].str[transition_len - 1 - j];
        }
        strcpy(tokens[i+1].str, transition_str);
        memset(transition_str, 0, sizeof(transition_str));
      for(j = i; j < nr_token-1; j++)
      {
        tokens[j] = tokens[j+1];
      }
      length_tokens--;
    }
    nr_token = length_tokens;
    num_of_token = nr_token;
  }

  /* TODO: Insert codes to evaluate the expression. */
  //make_token(e);
  int p=0,q=num_of_token-1;
  uint32_t res=eval(p,q);
  printf("%u",res);
  return res;
}
