#include <stdio.h>


union {
    short s[2];
    char c[4];
    int i;
} u;

main () {
    
    u.i = 5;
    printf("i: %d\n", u.i);
    
    u.c[1] = 3;
    printf("c[1]: %c\n", u.c[1]);

    u.s[0] = 11;
    printf("s[0]: %d\n", u.s[0]);

    u.c[3]= 14;
    printf("c[3]: %c\n", u.c[3]);

    for (int i = 0; i < 4; i++) {
        printf("Byte %d: %d\n", i, u.c[i]);
    }
    
    return 0; 
}