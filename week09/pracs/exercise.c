#include <stdio.h>

main (){
    int a = 1;
    int b = 3;

    int value = ((1 + b) << 4) | (a & 0xf);

    printf("value: %d\n", value);
}