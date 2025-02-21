#include <stdio.h>

int main(int argc, char **argv) {
	if (argc < 3) {
		printf("Invalid argument");
	}

	FILE *f = fopen (argv[1], "r");

	char ch;

	while((ch = fgetc(f)) != EOF ) {
		printf("%c", ch);
	}	

	fclose(f);

	//printf("%d\n", argc);    // just prints the value of argc (how many arguments)
	
	printf("Third argument: %s\n", argv[2]); // This is for if you have third argument 
											 // like ./questions3.c question1.c Hello 
											//  (This prints Hello at the end)

	return 0;
}
