// C Program to illustrate
// that the 'sizeof' operator
// is a 'compile time operator'
#include <stdio.h>
 
int main(void)
{
    int y;
    int x = 11;
 
    // value of x doesn't change
    y = sizeof(x++);
 
    // prints 4 and 11
    printf("%i %i\n", y, x);


    //////////////////////////////////////////

// C Program
// demonstrate the method
// to find the number of elements
// in an array
     int arr[] = { 1, 2, 3, 4, 7, 98, 0, 12, 35, 99, 14 };
    
    printf("size of array is %i\n", sizeof(arr));
    printf("Number of elements:%lu \n",
           sizeof(arr) / sizeof(arr[0]));
 

 ////////////////////////////////
 //my trying

 char a;
 short b;
 printf("%d\n", sizeof(a+b)); //it generally gives the biggest byte as a size so this case is 4
    return (0);
}