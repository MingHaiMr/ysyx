#include "./include/utils.h"
#include "init.h"
#include <stdio.h>
#include <getopt.h>
#include "./include/monitor.h"

svBit is_ebreak(int inst);
int main(int argc, char *argv[])
{
    sim_init();
    init_monitor(argc, argv);
    excute(30);
    final();
    return 0;
}












