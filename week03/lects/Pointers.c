#include <stdio.h>

int main(){
    int jamie;
    jamie = 5; 
    int *parker;

    parker = &jamie;

    printf("Value of pointie; %d\n", *parker);
    printf("Value of Pointer; %d\n", parker); // this is give address

    
    *parker = 7;
    printf("Value of pointie: %d\n", *parker);

    int kyle;
    kyle = jamie;
    int *riley;

    riley = parker;
    printf("*parker: %d\n", *parker);

    *riley = 5;
    printf ("*parker: %d\n", *parker);
    printf ("jamie: %d\n", jamie);

    // changing the sample
    riley = &kyle;
    printf("*riley: %d\n", *riley); //7
    riley = NULL;
    printf("riley: %d\n", riley);  //riley will be 0
    
    // printf("*riley: %d\n", *riley);      //This will be segmentation error


    //Sketching Arrays and Pointers

    char name[] = "Sue Young";
    char *p = name;
    char *q = p + 4;    // adding 4 byte  (This is know pointer
                                                    // arithmatic)
    printf("%s is %s\n", p, q);   //prints: "Sue Young is Young"

}