
#include <stdio.h>
#include <string.h>







int main(){
    
//Handout 3.1a
// Sketch the variables and pointers step-by-step 
// in the following code. What are the final values of
// mary and nina?
  
  /*
    int mary, nina, *peter, *rick, *steve;
    mary = 3;
    peter = &mary;
    rick = peter;
    steve = &nina;
    *steve = *peter + *rick;

    printf("mary: %d and nina %d\n", mary, nina);  // mary:: 3 and nina 6 
 */



//Handout 3.1b

//1. Sketch the character string as an array of characters 
// (don’t forget the null terminator).
// Sketch the pointer variables.
// What does the program print out?

  /*  char unit[] = "COMP2100 Systems Programming";
    char *p = unit;
    char *q = p + 9;
    printf ("%s is %s\n", p, q);  //print: "COMP2100 Systems Programming is Systems Programming"
    */
    


// 2. Modify the code above to print out "COMP2100 is Systems Programming".
// a. Add only one statement, right before the printf statement, that manipulates p.
// Hint: how does C char array end?


    // char unit[] = "COMP2100 Systems Programming";
   
    // *p[9] = "\0";   This will end the array but not rigth answer.
    
// b. What is the side effect? Sketch the current state of character string indicating all
// pointer variables.  
        
        // *p[9] = "\0";   you can not put null and stop like that only.

// c. How can this be fixed?
        //strncopy: coppying entire of string to another but with explicitly number of elements
  
 /*   char dest[9];
    strncpy(dest, unit, 8);
    printf("Modified: %s\n", dest);         // it will print only: COMP2100
 */



// 3.2 Handout

// Pass by reference
// Consider the following C code fragment. Write a function that swaps two characters. In particular,
// str will have “Ba” after calling the function.
    
    
   /*     char str[] = "aB";
        swap(&str[0], &str[1]);

        printf("Swapped str is: %s\n", str);   // it will print: Ba
   */
    


// Consider the following C code fragment.

      char unit[] = "Comp2100";
        int len = strlen(unit);
        
        for (int i = 0; i < len - 1; i++)
            for (int j = i + 1; j < len; j++)
                if (unit[i] < unit[j])
                   swap(&unit[i], &unit[j]);
  

// What is supposed to be the result of unit[] at the end of the nested for loop? 
 
       printf("Result: %s\n", unit);    // prints: pomC2100


// Currently, it is not working. Fix the code to produce the expected result.
    // I already right one with & signs

}   






// Funtions related the question above
void swap(char *ch1, char *ch2) {   // Handout 3.2 Pass by reference
        char temp = *ch1;
        *ch1 = *ch2;
        *ch2 = temp;
    }

