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

#include <common.h>
#include </home/haiming/Desktop/ysyx-workbench/nemu/src/monitor/sdb/sdb.h>
void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();
void test_expr();
int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  /* Start engine. */
  //test_expr();
  engine_start();
  
  return is_exit_status_bad();
}
void test_expr()
  /* Test generated expressions. */
{
  FILE* fp = fopen("/home/haiming/Desktop/ysyx-workbench/nemu/tools/gen-expr/input.txt","r");
  uint32_t result,expr_result;
  char expression[2048]={'\0'};
  bool test_success;
  int i;
  for(i = 0; i < 100; i++)
  {
    if((fscanf(fp,"%u",&result)==1)&&(fscanf(fp,"%s",expression)==1))
    {
      expr_result = expr(expression,&test_success);
      if(expr_result != result)
      {
        printf("\nunmatched value\n");
        assert(0);
      }
      else
      {
        printf("\nmatched result:%u expr result:%u\n",result,expr_result);
      }
    }
    else
    {
      printf("over\n");
      return;
    }
  }
}