
#pragma once

#include <cstdint>
#include <chrono>

#define NES_CLOCK_FREQ (21477272ll/4)
#define PPU_SCANLINE_CYCLE nes_ppu_cycle_t(341)

//Every CPU cycle is 3 PPU cycles. Therefore to keep things consistent I shall
//count with only PPU cycles. 
//1 nes_cycle_t = 1 PPU cycle = 1/3 CPU cycles
//likewise 3 nes_cycle_t = 3 PPU cycles = 1 CPU cycle

typedef std::chrono::duration<int64_t, std::ratio<1,1>> nes_cycle_t;
typedef std::chrono::duration<int64_t, std::ratio<1,1>> nes_ppu_cycle_t;
typedef std::chrono::duration<int64_t, std::ratio<3,1>> nes_cpu_cycle_t;


//May run into rounding issues later, I'll use a float or double if I do
static nes_cpu_cycle_t msToNesCycle(int ms){
    return nes_cpu_cycle_t(int64_t(NES_CLOCK_FREQ/1000*ms));
}

