#include "../include/monitor.h"
#include <stdio.h>
#include <stdlib.h>
#include "../init.h"
#include <string.h>



char *img_file = NULL;
char *log_file = NULL;
char *diff_so_file = NULL;
void parse_args(char *img_file_path);
void load_img();
void init_monitor(char *img_file_path) {
  /* Initialize the monitor. */
  printf("Initializing the monitor...\n");
  img_file = img_file_path;
  printf("Loading images...\n");
  load_img();
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


