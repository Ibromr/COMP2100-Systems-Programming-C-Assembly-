#include <stdio.h>

int main(void) {
// a. Sketch the variables of the following piece of C code (two integers and two
// pointers).
    int j, k;
    int *p, *q;

// Where do the pointers point in the above C code? What values are in the integers j
// and k?
    // Ans: somewhere in the momeory (check sketch.jpeg)

// c. Sketch the effect of the following C statements, assuming the variable declarations
// as above.  (check sketch.jpeg)
   
    p = 0;
    q = &j;
    j = 15;
    k = 23;
    *q = 11;

// d. What would happen if you tried to execute the following statement, after all the
// above?

   // *p = 18;        // Segmetation fault this is not working so this will kill your program.

   // printf("*p : %d\n", p);


    

}

/*  Check these agacdBriefly explain each of the following pointer errors and its likely impact on your program.
a. Uninitialised pointer.
b. Dereference null pointer.
c. Increment past end of array.
d. Pointer to local variable that has gone out of scope.
*/