#ifndef __MONITOR_H__
#define __MONITOR_H__

//#include <readline/readline.h>
//#include <readline/history.h>
#include "common.h"
#include <getopt.h>
#include "paddr.h"
#include <string.h>

void init_monitor(int argc, char* argv[]);
void parse_args(int argc, char* argv[]);
void load_img();

#endif


