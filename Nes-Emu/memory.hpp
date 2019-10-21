#pragma once

#include <vector>
#include <cassert>
#include <memory>

#include "component.hpp"
#include "mapper.hpp"

#define RAM 0x10000

class mapper;
class ppu;

class memory{
    private:
        std::vector<uint8_t> ram;

    memory(){
        ram.reserve(RAM);
    }
};