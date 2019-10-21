#pragma once

#include <cstdint>
#include "cycle.hpp"


class nes_system;

class nes_component{
    public:
    virtual void powerOn(nes_system *system) = 0;
    virtual void reset() = 0;
    virtual void stepTo(nes_cycle_t count) = 0;
};