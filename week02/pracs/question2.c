#include <stdio.h>

int main (int argc, char **argv){
    // a. Declare 4 intefers of varying sizes
    char a; // and 8bit/1byte integer
    short b; //an 16bit/2byte integer
    int c; // an 32bit/4byte integer
    long d; //64...

    // b. Declare a 64bit float with the value of pi
    double pi = 3.1415926535897932;

    //c. 
    char s[] = "COMP2100";
    // 0. How big is this array? 
        //Ans: 9 bytes including the null term
    
    // 1. ['C','O','M','P','2','1','0','0','\0']
    // 2. Write a C program that prints the ASCII of each 
    //     char in the String in decimal, octal, and hexadecimal.

    printf("10, 08, 16\n");
    for (int i = 0; i < 9; i++){
        printf("%d, %o, %x, \n", s[i],s[i],s[i]);
    }



}