#pragma once 

#include <iostream>
#include <array>
#include <algorithm>
#include <math.h>

#define ARRAY_SIZE 64

// num lenght is fixed 2048 bits
// sign is separate field
// little endian (LSB is first)

class LongNumber {
private:
    /// 64*32 = 2048 btis 
    std::array<uint32_t, ARRAY_SIZE> data;

public:
    friend std::ostream& operator << (std::ostream& os, const LongNumber& ln);
    
    LongNumber();
    // LongNumber(std::string some_number);
    // LongNumber(int some_int);
    LongNumber(std::array<uint32_t, ARRAY_SIZE> arr);
    LongNumber(const LongNumber& other);

    LongNumber& operator = (const LongNumber& other);
    LongNumber operator + (const LongNumber& other);
    LongNumber operator * (const LongNumber& other);
    LongNumber operator - (const LongNumber& other);

    bool operator == (const LongNumber& other);
    bool operator != (const LongNumber& other);
    bool operator > (const LongNumber& other);
    bool operator < (const LongNumber& other);

};