#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARR_SIZE 10

int compints(const void *p1, const void *p2) {
    int val1 = *((int *) p1); 
    int val2 = *((int *) p2);

    if (val1 > val2) {
        return 1;
    }
    if (val1 < val2) {
        return -1;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    int *buffer;
    int capacity;
    int count; 
    int read_in_number;

    // initialise
    buffer = (int *) malloc(sizeof(int)*ARR_SIZE);
    capacity = ARR_SIZE;
    count = 0;

    while (scanf("%d", &read_in_number) == 1) {
        buffer[count++] = read_in_number;
        if (count >= capacity) {
            capacity *= 2;
            buffer = (int *) realloc(buffer, sizeof(int) * capacity);
        }
    }
   
    for (int i = 0; i < count; i++) {
        printf( "%d  ", buffer[i]);
    }
    printf("\n");

    qsort(buffer, count, sizeof(int), compints);

    for (int i = 0; i < count; i++) {
        printf("%d  ", buffer[i]);
    }
    printf("\n");

    return 0;
}
