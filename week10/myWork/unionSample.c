#include <stdio.h>

union sample{
    int a; 
    float b;
    char c;
}

main() {
    union sample s;

    // Assign values to the unioun one at a time 
    
    s.a = 10;
    printf("a = %d\n", s.a);

    s.b = 20.5;
    printf("b = %f\n", s.b);

    s.c = 'A';
    printf("c = %c\n", s.c);

}