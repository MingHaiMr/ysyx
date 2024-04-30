#include "../include/monitor.h"
#include <stdio.h>
#include <stdlib.h>
#include "../init.h"
#include <string.h>



char *img_file = NULL;
char *log_file = NULL;
char *diff_so_file = NULL;
void parse_args(int argc, char *argv[]);
void load_img();
void init_monitor(int argc, char *argv[]) {
  /* Initialize the monitor. */
  printf("Initializing the monitor...\n");
  parse_args(argc, argv);
  printf("Loading images...\n");
  load_img();
}



void parse_args(int argc, char *argv[]) {
  /* Parse the arguments. */
    printf("Parsing the arguments...\n");
    printf("%s\n", argv[1]);
    const struct option table[] = {
        {"batch", no_argument, NULL, 'b'},
        {"log", required_argument, NULL, 'l'},
        {"diff", required_argument, NULL, 'd'},
        {"img", required_argument, NULL, 'i'},
        {"help", no_argument, NULL, 'h'},
        {0, 0, NULL, 0},
    };
    int o;
    while(o = getopt_long(argc, argv, "bl:d:i:h", table, NULL) != -1) {
        
        switch(o) {
            case 'b': break;//sdb_set_batch_mode(); break;
            case 'l': assert(optarg != NULL); log_file = optarg; break;
            case 'd': assert(optarg != NULL); diff_so_file = optarg; break;
            case 'i': assert(optarg != NULL); img_file = optarg; break;
            case 'h': break;
            default:
                img_file = optarg;
                //printf("o: %c\n", o);
                //printf("Usage: %s [OPTION...] IMAGE [args]\n", argv[0]);
                //printf("\t-b,--batch              run with batch mode\n");
                //printf("\t-l,--log=FILE           output log to FILE\n");
                //printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
                //printf("\t-i,--img=IMG            load IMG to memory\n");
                //printf("\n");
                break;
        }
    }
    return;
}


void load_img()
{
    /* Load the image to memory. */
    printf("Loading the image to memory...\n");
    if(img_file == NULL)
    {
        printf("No image file specified, use built in image.\n");
        memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
        return;
    }
    FILE *fp = fopen(img_file, "rb");
    if(fp == NULL)
    {
        printf("Can not open the image file.\n");
        return;
    }
    printf("%s\n", img_file);
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    void *img = malloc(size);
    if(fread(img, 1, size, fp) != size)
    {
        printf("Can not read the image file.\n");
        return;
    }
    memcpy(guest_to_host(RESET_VECTOR), img, size);
    free(img);
    fclose(fp);
    return;
}


