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

#include "watchpoint.h"
void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].flag = 0;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

WP* new_wp(){
  int i;
  for(i = 0; i < NR_WP; i++)
  {
    if(wp_pool[i].flag == 0)
    {
      wp_pool[i].flag = 1;
      if(head == NULL)
      {
        head = &wp_pool[i];
        head -> next = NULL;
      }
      else
      {
        wp_pool[i].next = head;
        head = &wp_pool[i];
      }
      return &wp_pool[i];
    }
  }
  printf("no available watchpoints\n");
  assert(0);
  return NULL;
}

void free_wp(WP *wp)
{
  WP* p;
  if(head ->NO == wp ->NO)
  {
    head -> flag = 0;
    if(head -> next == NULL)
    {
      head = NULL;
    } 
    else
    {
      p = head;
      head = head -> next;
      p -> next = NULL;
    }
    return;
  }
  for(WP* p = head; p != NULL; p = p -> next)
  {
      if(p -> next -> NO == wp -> NO)
      {
        p -> next -> flag = 0;
        p -> next = p -> next -> next;
        return;
      }
  }
}

void create_watchpoint(char* args)
{
  WP* p = new_wp();
  bool issuccess = true;
  strcpy(p -> exp, args);
  word_t value;
  value = expr(p -> exp, &issuccess);
  if(issuccess)
  {
      p -> val = value; 
  }
  else
  {
      printf("fail\n");
  }
}

void delete_watchpoint(int n)
{
  WP* p = head;
  if(head -> NO == n)
  {
    free_wp(head);
    return;
  }
  for(; p != NULL; p = p -> next)
  {
    if(p -> NO == n)
    {
      free_wp(p);
      return;
    }
  }
}

void print_watchpoints()
{
  WP* p = head;
  if(p == NULL)
  {
    printf("no watchpoint\n");
    return;
  }
  else
  {
    for(; p != NULL; p = p -> next)
    {
      printf("\n%d %s value: %u\n",p -> NO, p -> exp, p ->val);
    }
  }
}

void check_watchpoint_value()
{
  bool update_success;
  for(WP* p = head; p != NULL; p = p -> next)
  {
    uint32_t new_value = expr(p -> exp , &update_success);
    if(new_value != p -> val)
    {
      printf("\nNO:%d %s old:%u new:%u\n",p->NO,p->exp,p->val,new_value);
      p->val = new_value;
      nemu_state.state = NEMU_STOP;
    } 
  }
}