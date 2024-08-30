#include <am.h>
#include <nemu.h>
#include "/home/chengchen/Desktop/ysyx/abstract-machine/am/src/riscv/riscv.h"
#include <stdio.h>
#define SYNC_ADDR (VGACTL_ADDR + 4)


void __am_gpu_init() {
  //int i;
  //int w = 400;  // TODO: get the correct width
  //int h = 300;  // TODO: get the correct height
  //uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  //for (i = 0; i < w * h; i ++) fb[i] = i;
  //outl(SYNC_ADDR, 1);
}


void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t size = inl(VGACTL_ADDR);
  //printf("size is %d\n", size);
  uint32_t screen_width = (size >> 16);
  //printf("width is %d\n", screen_width);
  uint32_t screen_height = (size & 0xffff);
  printf("height is %d\n", screen_height);
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = screen_width, .height = screen_height,
    .vmemsz = (screen_width * screen_height) * sizeof(uint32_t)
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  uint32_t* fb = (uint32_t *)(uintptr_t)FB_ADDR;
  uint32_t* pixels = (uint32_t *)(uintptr_t)(ctl->pixels);
  uint32_t size = inl(VGACTL_ADDR);
  //printf("size is %d\n", size);
  uint32_t screen_width = (size >> 16);
  //printf("width is %d\n", screen_width);
  int x_ = ctl->x;
  //printf("x is %d\n", x_);
  int y_ = ctl->y;
  int w_ = ctl->w;
  int h_ = ctl->h;
  for (int j = 0; j < h_; j++) {
    for (int i = 0; i < w_; i++) {
      fb[(y_ + j) * screen_width + (x_ + i)] = pixels[j * w_ + i];
    }
  }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
