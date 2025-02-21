

// Bits, Bytes and Integers


// 2.1: Perform the following number conversions:
// A. 0x25B9D2 to binary

//  0010  0101  1011  1001  1101  0010


// B. binary 1010 1110 0100 1001 to hexadecimal
//             A   E     4   9
//      0xAE49


// C. 0xA8B3D to binary

//  1010  1000  1011  0011  1101


// D. binary 11 0010 0010 1101 1001 0110 to hexadecimal

//      0x322D96





// 2.2 Without converting the numbers to decimal or binary, try to solve the following arithmetic
// problems, giving the answers in hexadecimal. Hint: Just modify the methods you use for
// performing decimal addition and subtraction to use base 16.

// A. 0x503c + 0x8 = 
//    +  0x8
// ----------
//    0x5044


// B. 0x503c − 0x40 = 
//    - 0x40
// ----------
//   0x4FFC



#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len) {
    int i;
    for (i = 0; i < len; i++)
    printf(" %.2x", start[i]);
    printf("\n");
}

// Consider the following three calls to show_bytes:
int main(){ 
    int a = 0x12345678;
    byte_pointer ap = (byte_pointer) &a;
    show_bytes(ap, 1); /* A. */
    show_bytes(ap, 2); /* B. */
    show_bytes(ap, 3); /* C. */
}




// Unsigned addition
// What is the sum of each of the following 8-bit unsigned addition operations (UAdd)? Show the sum
// as decimal, binary, octal and hex.


// a. 100 + 1
//    01100110

// b. 254 + 1
//  


// c. 255 + 1
//  


// d. 128 + 138

// 1000 0000
// 1000 1010
//+----------
// 00001010




// Floating Point
// The first priority in tutorials is your questions. Come with relevant questions to help you better
// understand the lectures and readings.

// • Fill in the missing information in the following table:

//    Decimal         Binary             Decimal
//      1/8            0.001              0.125
//      3/4            0.11               0.75
//     25/16           1.1001             1.5625
//                     10.1011           2.6875 