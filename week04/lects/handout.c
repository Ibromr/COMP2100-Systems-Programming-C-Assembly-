#include <stdio.h>

// COMP2100 Lecture 4.1a Handout

struct foo1 {
    double d;
    char c;
}foo1;

struct foo2 {
    double d;
    char c;
    int i;
}foo2;


struct foo3 {
    double d;
    int i;
    float f;
}foo3;

struct foo4 {
    char c;
    int i;
    double d;
}foo4;

struct foo5 {
    double d;
    char c[9];
    int i;
    float f;
}foo5;


// another example 
struct example1 {
    char c;
    double d;
    int i;
}example1; // May have more padding

struct example2 {
    double d;
    int i;
    char c;
}example2; // May have less padding

struct example3 {
    char c;
    int d;
    short i;
}example3; // May have more padding

struct example4 {
    int d;
    char i;
    short c;
}example4; // May have less padding


struct bag  
{  
    int x;  
    char y;  
    double z;  
};  


int main() 
{ 

// 4.2a Handout
// Data alignment
// What is the size of each of the following C structs, on the x86_64 system with gcc?
    printf("sizeof(foo1) = %lu\n", sizeof(foo1)); 
    printf("sizeof(foo2) = %lu\n", sizeof(foo2)); 
    printf("sizeof(foo3) = %lu\n", sizeof(foo3)); 
    printf("sizeof(foo4) = %lu\n", sizeof(foo4));
    printf("sizeof(foo5) = %lu\n", sizeof(foo5)); 

    
    printf("sizeof(Example1) = %lu\n", sizeof(example1)); // May have more padding
    printf("sizeof(Example2) = %lu\n", sizeof(example2)); // May have less padding
  
    printf("sizeof(Example1) = %lu\n", sizeof(example3)); // May have more padding
    printf("sizeof(Example2) = %lu\n", sizeof(example4)); // May have less padding

    struct bag var;    //  variable declaration of type bag  
                     //  size of the structure bag is displayed  
    printf("The size of the var when structure padding is avoided is : %d\n", sizeof(var));
  
    return 0; 
}