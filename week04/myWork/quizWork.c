#include <stdio.h>

// int main() {
//     // Define an array of doubles
//     double arr[3] = {1.1, 2.2, 3.3};

//     // Define a pointer to the array
//     double *p = arr;

//     // Print the original address pointed to by p
//     printf("Original address: %p\n", (void *)p);        //researh (void *)

//     // Increment the pointer
//     ++p;

//     // Print the new address pointed to by p
//     printf("Address after ++p: %p\n", (void *)p);

//     return 0;
// }
    

int main() {
    int arr[] = {10, 20, 30};

    int *p = arr;

    // Using pre-increment
    printf("Using ++p:\n");

    ++p; // p now points to arr[1]
    printf("Value at ++p: %d\n", *p); // Prints 20

    // Resetting pointer to arr[0]
    p = arr;

    // Using post-increment
    printf("Using p++:\n");

    printf("Value at p: %d\n", *p); // Prints 10

    p++; // p now points to arr[1] after use
    printf("Value at p after p++: %d\n", *p); // Prints 20

    return 0;
}

