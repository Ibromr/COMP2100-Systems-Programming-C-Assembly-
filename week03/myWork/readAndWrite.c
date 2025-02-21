#include <stdio.h>

void main()
{
	char ch;
	printf("Enter a character:");
	ch = getchar();
	printf("The character entered is:");
	while (ch != EOF)
		putchar(ch);  // going to endless loop?
	printf("\n");
}
