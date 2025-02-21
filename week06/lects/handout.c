// COMP2100 Lecture 6.1a Handout

// Binary Numbers with a Binary Point

//1. Write 1.375_(10) (i.e. 1 3/8) in binary.

// 1.011


// 2. What is 110.01_(2) as decimal?
//  6.25


// 3. What is 110.01_(2) * 2_(10) as binary?

//       110.01      
//         <--     
//       1100.1

//          As decimal?
//              12??? could not write 



// COMP2100 Lecture 6.1b Handout 
// Floating Point Conversion Example 

// Use the following steps to convert 14.7510 to IEEE single precision floating point. 

//1. Convert 14.75_(10) (i.e. 14 ¾) to binary

//  1110.11

// 2. Write down the sign bit s 

//  s= 0


// 3. Normalise the binary number into the form 2^E * 1.frac.

//  2^3 * 1.11011



// 4. Write the bias for IEEE single precision floating point; the exp field is 8 bits

//      bias = 127         0111 1111



// 5. Compute exp = E + bias. Write the value of exp as binary.

//      exp = 130 

//      binary = 1000 0010


// 6. Write the binary representation of the floating point number: s exp frac. For simple
// numbers there are typically many zeroes at the end of frac

// 0 1000 0010 110110...0
//                  -----
//                    18    


// 7. Convert the binary to hexadecimal.

// 616???? could not wrie but I did not understand this conversion 




// COMP2100 Lecture 6.2a Handout
// Denormalised values
// The smallest denormalised IEEE single precision floating point number has a value of approximately
// 1.4e-45. In binary, it is represented by:

// s=0 exp=0000 0000 frac=0000 0000 0000 0000 0000 001


// 1. Write the value of this number in the denormalised form 2E * 0.xxxx xxxx xxxx xxxx xxxx xxx?

//      2^(-126) * 0.0000 .... - 1 


// 2. Normalise this number and write it in the form 2E * 1.xxxx xxxx xxxx xxxx xxxx xxx: 

// 2^(-149) * 1.0...0


// 3. How many exponent bits would you need to represent this number as a normalised floating
// point number?



// COMP2100 Lecture 6.2b Handout
// Floating Point Puzzles
// Assume k is int, f is float, d is double. Assume neither d nor f is NaN but may be inf.
// Consider whether each of the following is always true, or can you describe a counter example?

// true, or can you describe a counter example?

// 1. k == (int)(float) k
//  False  because in frac field we use only 123 bits 

// 2. k == (int)(double) k
//      T check fact ext sign sizez in w6 lecture notes

// 3. 
//  T 


//4. 
// F

//5. 
//  T 


//6.
//  F

//7. 
// T

//8. 
// T

//9. 
//  F



// COMP2100 Lecture 6.3 Handout
// Floating Point Addition Example

// 14.75 is 1110.11_(2). Write the sign, E, then exp and frac bits:

//  0 3 130     11011 


// 1.5 is 1.1_(2). Write the sign, E, then exp and frac bits:
//  0  0  127   10 ... 0 
//               ------
//                 22



// Write the significand of 14.75. Shift the significand of 1.5 to align with 14.75 (i.e. same E). Add the
// two binary numbers.

//    1.11011 
//    0.0011
//  ----------
//   10.00001


// Fix – renormalise if required

//      1.000001 


// Rounding is not required. Write the result as sign, exp and frac.

//      0 4(E)           0000010....0
//        10000011             -----
//                               17


// Decode the floating point result to decimal

//  1.000001 X 2^4              = 10000.01
//                  as decimal  16.25