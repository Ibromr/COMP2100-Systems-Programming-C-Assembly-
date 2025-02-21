#include <stdio.h>
#include <stdint.h>
#include <math.h>

float ieee754ToFloat(uint32_t ieee) {
    int sign = (ieee >> 31) & 1;
    int exponent = ((ieee >> 23) & 0xFF) - 127;
    uint32_t mantissa = ieee & 0x7FFFFF;

    // Normalize the mantissa (add the implicit leading 1)
    float normalized_mantissa = 1 + (mantissa / pow(2, 23));

    // Calculate the final float value
    float value = pow(2, exponent) * normalized_mantissa;
    
    return sign ? -value : value;
}

int main() {
    uint32_t ieee = 0xC16C0000;  // 1100 0001 0110 1100 0000 0000 0000 0000

    float result = ieee754ToFloat(ieee);

    printf("The decimal value is: %.6f\n", result);

    return 0;
}

/*
The smallest number IEEE 754 single precision can represent is 1.0 * 2^-126?
Question 3Select one:

True 


*/