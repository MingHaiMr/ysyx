#include "../include/common.h"
#include "svdpi.h"
#include </home/haiming/ysyx/npc/obj_dir/Vysyx_23060187_top.h>
#include "Vysyx_23060187_top__Dpi.h"

extern svBit is_ebreak(int inst);
svBit is_ebreak(int inst, int gpr_10)
{
    if(inst == EBREAK) {
        if(gpr_10 == 0) 
        {
            printf("\n\33[1;32m" "NPC : " "HIT GOOD TRAP !!! " "\033[0m\n");
        }
        else
        {
            printf("\n\33[1;31m" "NPC : " "HIT BAD  TRAP !!! " "\033[0m\n");
        }
        return 1;   
    }
    else return 0;
}