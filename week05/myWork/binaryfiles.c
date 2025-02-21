// Goal read and write to binary files instead 

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* text_file  =fopen("binary.bin", "rb");

    if(text_file == NULL) {
        printf("Could not located file\n");
        exit(-1);
    }

    //For writing into bin file        dont forge to change write binary: ("wb")
    // int number = 32;
    // fwrite(&number, sizeof(int), 1, text_file);

    // double myDouble = 3.1415;
    // fwrite(&myDouble, sizeof(double), 1, text_file);


    // Reading bin file 
    int number;
    fread(&number, sizeof(int), 1, text_file);

    double myDouble;
    fread(&myDouble, sizeof(double), 1, text_file);
    
    printf("%d\n", number);  // prints 32
    printf("%lf\n", myDouble);

    return 0;
}


// fprintf(filename, " ")  this printing strings to text file