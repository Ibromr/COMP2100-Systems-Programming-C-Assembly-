#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARR_SIZE 10

int arr[ARR_SIZE] = {1, 3, 8, 7, 2, 4, 6, 5, 9, 0 };

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
    for (int i = 0; i < ARR_SIZE; i++) {
        printf( "%d  ", arr[i]);
    }
    printf("\n");

    qsort(arr, ARR_SIZE, sizeof(int), compints);

    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
