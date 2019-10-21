/*NES emulator by Raymond Habis - to be named*/

#pragma once

#include <vector>
#include "memory.hpp"
#include "mapper.hpp"
#include "component.hpp"

//Carry
//1 if the last addition of shift resulted in a carry or if the last
//subtraction didn't use a borrow. 

#define CPU_CARRY_MASK 0x1

//Zero
//1 if the last operation was a 0
#define CPU_ZERO_STATUS 0x2

