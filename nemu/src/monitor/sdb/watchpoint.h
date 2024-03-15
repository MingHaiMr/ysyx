#ifndef __WATCHPOINT_H__
#define __WATCHPOINT_H__

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  int flag;
  char exp[128];
  word_t val;  
  /* TODO: Add more members if necessary */

} WP;
static WP wp_pool[NR_WP] __attribute__((unused));
static WP* head __attribute__((unused)); 
static WP* free_ __attribute__((unused));
void print_watchpoints();
void delete_watchpoint(int n);
void create_watchpoint(char *args);
void check_watchpoint_value();
#endif