 #include <stdio.h> 

  int a = 2;
  int *p;   

 int main(void) {

   
         // printf("%p\n", p);      //prints: nil 

         // p = &a;

         // printf("%d\n", *p);     // prints: 2

   int array[5];
   printf("Size of the array: %d byte/s -- %d element/s\n", sizeof(array), sizeof(array)/sizeof(int));
   

   return 0;

 }