#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int deg = 0;
    int *pdeg; 

    deg = 10; 

    pdeg = &deg;
    printf("First Value: %d\n", deg);

    *pdeg = 20;

    printf("Second Value: %d\n", deg);

    printf("Value o pointer: %d\n", pdeg);
    
    deg = 15;  
    printf("Value of pointie: %d\n", *pdeg);
    
    pdeg = pdeg + 2;    //When we add 2 you will see in print, an increase 8 in the total
    printf("Value o pointer: %d\n", pdeg);
    printf("Value of pointie: %d\n", *pdeg);
}