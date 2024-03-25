#include "./include/utils.h"
#include "init.h"
#include <stdio.h>
#include "./include/tools.h"
#ifdef TARGET_AM
#include <getopt.h>
#endif


int parse_args(int argc, char *argv[]);
void load_img();
svBit is_ebreak(int inst);
int main(int argc, char *argv[])
{
    sim_init();
    #ifdef TARGET_AM
    load_img();
    #else
    init_img();
    #endif
    excute(20);
    final();
    return 0;
}




#ifdef TARGET_AM
void load_img() {
  
  char img_file[] = "/home/haiming/Desktop/ysyx-workbench/npc/dummy-riscv32e-npc.bin";
  FILE *fp = fopen(img_file, "rb");
  assert(fp != NULL);
  //Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
}

#else

void init_img() {
    memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
}

#endif







