#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>

#include <assert.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>
#define likely(cond) __builtin_expect(cond,1)
#define SDB 1
typedef unsigned int uint32_t; 
typedef unsigned long uint64_t;
typedef unsigned short int uint16_t;
typedef unsigned char uint8_t;
typedef int int32_t;




typedef uint32_t word_t;
typedef int32_t sword_t;
typedef word_t vaddr_t;
typedef vaddr_t paddr_t;
typedef uint16_t ioaddr_t;

#define MEMORY_BASE 0x80000000
#define PC_RESET_OFFSET 0x0
#define MEMORY_SIZE 0x8000000
#define RESET_VECTOR (MEMORY_BASE + PC_RESET_OFFSET)
#define MUX(COND, A, B) ((COND) ? (A) : (B))
#define PG_ALIGN __attribute__((aligned(4096))) 
#define CONFIG_TARGET_NATIVE_ELF 1
#define CONFIG_DIFFTEST 
#define DIFFTEST_TO_REF 1

#define ADDI    0b00000000001000000000000100010011 //imm:0x2 rs1:0x0 rd:0x2 R(rd)=R(rs1)+imm
#define EBREAK  0b00000000000100000000000001110011

#define TARGET_AM 1  //Decide Whether To Use Am Image Or Not



#endif