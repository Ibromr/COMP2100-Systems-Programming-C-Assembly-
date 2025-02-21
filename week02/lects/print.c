#include <stdio.h>

int main() 
{
	int ch = 65;
	char c = 'A';
	int d = 65535;
	char unit[] = "COMP2100";
	
	printf("%c == %d\n", ch, ch);
	printf("%c == %d\n", c, c);
	printf("Welcome to %s\n", unit);
	printf("%#x\n", ch);
	printf("%04d\n", ch);
	printf("%#.4x\n", ch);
	printf("%d == %hd == %hhd == %x == %#X\n", d, d, d, d, d);

	return 0;
}
