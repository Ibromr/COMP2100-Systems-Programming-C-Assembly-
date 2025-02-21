 #include <stdio.h> 

  int a = 2;
  int *p;   

 int main(void) {
    printf("%p\n", p);      //prints: nil 

    p = &a;

    printf("%d\n", *p);     // prints: 2

 }