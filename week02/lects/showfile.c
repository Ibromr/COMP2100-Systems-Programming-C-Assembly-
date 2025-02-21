#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char **argv){
	
	FILE *input = NULL;
	char ch;

	if (argc < 2) {
		printf("USAGE: %s input_file\n", argv[0]);
		exit(1);
	}
	input = fopen(argv[1], "r");
	ch = fgetc(input);
 	while(ch != EOF){
		putchar(ch);  //printf("%c", ch);
		ch = fgetc(input);
	}
	
	fclose(input);

	return 0;
}
