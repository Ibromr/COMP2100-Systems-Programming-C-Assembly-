#include <stdio.h>
#include <math.h>

// Function to print the binary representation of the integer part
void printBinaryInteger(int n) {
    if (n > 1)
        printBinaryInteger(n / 2);
    printf("%d", n % 2);
}

// Function to print the binary representation of the fractional part
void printBinaryFraction(double fraction) {
    printf(".");
    while (fraction > 0) {
        fraction *= 2;
        int bit = (int)fraction;
        printf("%d", bit);
        fraction -= bit;
    }
}

// Function to convert and print a floating-point number to binary
void printBinary(double num) {
    int integerPart = (int)num;
    double fractionalPart = num - integerPart;

    printBinaryInteger(integerPart);
    printBinaryFraction(fractionalPart);
    printf("\n");
}

int main() {
    double num1 = 255.75;
    double num2 = 14.375;
    double num3 = 13.25;
    double num4 = 5.99;

    printf("Binary representation of %.2f: ", num1);
    printBinary(num1);

    printf("Binary representation of %.3f: ", num2);
    printBinary(num2);

    printf("Binary representation of %.2f: ", num3);
    printBinary(num3);

    printf("Binary representation of %.2f: ", num4);
    printBinary(num4);

    return 0;
}