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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";
uint32_t choose(uint32_t n)
{
  uint32_t num=(rand())%n;
  return num;
}

int buf_len=0;

void gen_num()
{
  char str[32]={'\0'};
  uint32_t num = rand()%20;
  while(num==0)
  {
    num=rand()%20;
  }
  sprintf(str,"%u",num);
  int len=strlen(str),i;
  for(i=0; i<len; i++)
  {
    buf[buf_len++]=str[i];
  }
  memset(str,0,sizeof(str));
}

void gen(char ch)
{
  buf[buf_len++]=ch;
}

void gen_rand_op()
{
  switch(choose(4))
  {
    case 0:
      buf[buf_len++]='+';
    break;
    case 1:
      buf[buf_len++]='-';
    break;
    case 2:
      buf[buf_len++]='*';
    break;
    default:
      buf[buf_len++]='/';  
    break;    
  }
}
static void gen_rand_expr() {
  if(buf_len>=65535)
  {
    //printf("length of expr over!");
    //assert(0);
    //memset(buf,0,sizeof(buf));
    //buf_len=0;
    return;
  }
  switch (choose(3)) {
    case 0: gen_num(); break;
    case 1: gen('('); gen_rand_expr(); gen(')'); break;
    default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;
  }
}


int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    gen_rand_expr();
    buf[buf_len]='\0';
    sprintf(code_buf, code_format, buf);
    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc -Werror /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
    memset(buf,0,sizeof(buf));
    buf_len=0;
  }
  return 0;
}

