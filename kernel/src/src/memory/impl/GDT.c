#include "../GDT.h"


__attribute__((aligned(0x1000))) gdt_t gdt = {
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
    {0x0, 0x0, 0x0, 0x9A, 0xA0, 0x0},
    {0x0, 0x0, 0x0, 0x92, 0xA0, 0x0},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
    {0x0, 0x0, 0x0, 0x92, 0xA0, 0x0}
};