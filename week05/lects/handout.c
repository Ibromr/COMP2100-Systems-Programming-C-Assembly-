/*

COMP2100 Handout 5.1a
Machine Word
1. x64 has a 64-bit machine word. What fraction of a word is each of the following C data
types?
o long int
o short int
o unsigned int
o char
o int *



2. Convert decimal 37 to binary, hex and octal

binary -- 100101

hex  -- 10 | 0101 |      ---      0x25

octal 100  |   101  --- (45)





COMP2100 Handout 5.1b
Remember:

• The mnemonic LLL: Little endian Least bit Lowest address.
• x64 is little Endian
• Powers of 2: 1 2 4 8 16 32 64 128 256 512 1024 (you need to memorise these)
Words, bytes and bits


1. A hex dump of a four byte x64 integer is as follows. The lowest memory address is on the
left.
0a 01 00 00

What is the value of this integer?

• As hexadecimal:
            00 00 01 0a

• As binary:


• As octal:
        266





2. Here is a binary bit-wise operation applied to two 32-bit integers. What is the operator OP?
      
        0000 0100 0011 1011 1111 0111 0001 1000 OP
        0000 0010 0010 0000 0100 1001 1000 0110
        0000 0110 0001 1011 1011 1110 1001 1110
                                    | 
        Answer: XOR               check


3. Using only bit-level and logical operations, write a C expression that is equivalent to x == y

    Answer: !(x^y)





COMP2100 Handout 5.2a

Casting Surprises
C prefers unsigned: If either side of the operator is unsigned, it casts the other to unsigned.
The maximum signed 32 bit integer is 2147483647
1. What is the outcome (true/false) of each of the following C expressions? Why?

a. 0 == 0U
    T

b. -1 < 0
    T

c. -1 < 0U
      1...1 >  0...0  so False

d. 2147483647U > -2147483647-1
        False


e. (unsigned) -1 > -2
        True


f. 2147483647 > (int) 2147483648U
            True   why check???

*/