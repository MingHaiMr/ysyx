#include "../include/common.h"
#include "svdpi.h"
#include </home/haiming//Desktop/ysyx-workbench/npc/obj_dir/Vysyx_23060187_top.h>
#include "Vysyx_23060187_top__Dpi.h"

extern svBit is_ebreak(int inst);
svBit is_ebreak(int inst)
{
    if(inst == EBREAK) {
        return 1;   
    }
    else return 0;
}