// C Program to illustrate the structure without bit field
#include <stdio.h>
 
// A simple representation of the date
struct date {
    unsigned int d;         // I do not know how it calculates?
    unsigned int m;
    unsigned int y;
};


// Space optimized representation of the date
// use of Bit-fields
struct date1 {
    // d has value between 0 and 31, so 5 bits
    // are sufficient
    int d : 5;
 
    // m has value between 0 and 15, so 4 bits
    // are sufficient
    int m : 4;
 
    int y;
};
 
int main()
{
    // printing size of structure
    printf("Size of date is %lu bytes\n",
           sizeof(struct date));
    struct date dt = { 31, 12, 2014 };
    printf("Date is %d/%d/%d\n", dt.d, dt.m, dt.y);

    printf(">>>>>>>>>>>>>>>>>>>>>\n");

    printf("Size of date is %lu bytes\n",
           sizeof(struct date1));
    struct date1 dt1 = { 31, 12, 2014 };
    printf("Date1 is %d/%d/%d\n", dt.d, dt.m, dt.y);

    return 0;
}