#include <stdio.h>

#define foo(x, y) ((x)+(y)/2)

// 3. Which of the following is the correct output of printf("%f == %+f == %07.2f == %07.5f\n", f, f, f, f); when f is set to 3.1415?
// 4. Consider #define foo(x, y) ((x)+(y)/2). What is the output of printf("%d", foo(5, 2))?
int main(void){
    float f = 3.1415;
    
    //printf("%f == %+f == %07.2f == %07.5f\n", f, f, f, f); // 1. "3.141500 == +3.141500 == 0003.14 == 3.14150" (float has 6 decimal places by default)
    
    printf("%d\n", foo(5, 2));

    return 0;
}