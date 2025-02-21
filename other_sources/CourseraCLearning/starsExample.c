#include <stdio.h>

// prints i stars
void printIStars(int i) {
    // Count (call it j) from 1 to i (inclusive)
    for (int j = 1; j <= i; j++) {
        // Print a start
        printf("* ");
    }
}

// prints a triangle of n stars
void printStarDiamond(int n) {
    
    // Count (call it i) from 1 to n (inclusive)
    for (int i = 0; i <= n; i++) {
        printf("%*s", n-i, "");
        // Print i stars
        printIStars (i);
        // Print a newline
        printf("\n");
    }

    for (int i = 0; i <= n; i++) {
        printf("%*s", 0+i, "");
        // Print i stars
        printIStars ((n)-i);
        // Print a newline
        printf("\n");
    }
}

int main(int argc, char *argv[]) {
    printStarDiamond(10);
}