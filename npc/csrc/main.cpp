#include "init.h"
#include <stdio.h>
#include <getopt.h>
#include "./include/monitor.h"
#include "./include/tools.h"

svBit is_ebreak(int inst);
void engine_start();
void sdb_set_batch_mode();
const char *ref_so_file = NULL;
long getFileSize(const char *filePath);
int main(int argc, char *argv[])
{
    sim_init();
    init_monitor(argv[1]);
    #ifdef CONFIG_DIFFTEST
    long img_size = getFileSize(argv[2]);
    init_difftest(argv[2], img_size, 0);
    #endif 
    engine_start();
    final();
    return 0;
}

long getFileSize(const char *filePath) {
    FILE *file = fopen(filePath, "rb");
    if (file == NULL) {
        perror("Failed to open file");
        return -1;  
    }
    fseek(file, 0, SEEK_END); 
    long size = ftell(file);   
    fclose(file); 
    return size;
}















