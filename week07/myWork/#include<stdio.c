#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
#define BUF_SIZE 256
 
struct node {
 char *name;
 struct node *next;
};
 
int main() {
    char buf[BUF_SIZE];
    struct node *head = NULL;
    struct node *tail = NULL;
 
    for (int i = 0; i < 3; i++) {   // (i) [2 marks]
      struct node *new = (struct node *)malloc(sizeof(struct node)); // (ii) [4 marks]
      scanf("%s", buf);
      new->next = NULL; // (iii) [4 marks]
      new->name = (char *)malloc(sizeof(char) * strlen(buf) + 1);
      strcpy(new->name, buf); // (iv) [4 marks]
      
      if (tail) {
         tail->next = new;
         tail = new;
      } else
         head = tail = new;
   }
 
   return 0;
}