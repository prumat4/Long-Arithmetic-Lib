#pragma once 

#include <iostream>
#include <array>

#define ARRAY_SIZE 32

// num lenght is fixed 2048 bits
// sign is separate field
// little endian (LSB is first)

class LongNumber {
private:
    /// 64*32 = 2048 btis 
    std::array<uint64_t, ARRAY_SIZE> number;
    bool sign;

public:
    friend std::ostream& operator<< (std::ostream& os, const LongNumber& ln);
    
    LongNumber();
    LongNumber(std::array<uint64_t, ARRAY_SIZE> arr);
    LongNumber(const LongNumber& other);
};