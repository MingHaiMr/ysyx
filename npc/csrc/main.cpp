#include "./include/utils.h"
#include "init.h"
#include <stdio.h>
#include <getopt.h>
#include "./include/monitor.h"
#include "./include/tools.h"

svBit is_ebreak(int inst);
void engine_start();
void sdb_set_batch_mode();
int main(int argc, char *argv[])
{
    sim_init();
    init_monitor(argc, argv);
    engine_start();
    final();
    return 0;
}















