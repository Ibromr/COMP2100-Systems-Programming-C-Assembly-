#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ERROR_CODE 1
#define USAGE "[-u | -l] [file name]"

int main(int argc, char **argv) {
    FILE *f;
	int upper;
	char ch;

   if (argc < 3) {
		printf("Invalid argument\n");
        printf("Usage: %s  %s\n", argv[0], USAGE);
        return 1;
   }

    
    
    f = fopen (argv[2], "r");
	
    if (f == NULL) {
        printf("Bad file name: %s\n", argv[2]);
        return ERROR_CODE;
    }

	if(strncmp(argv[1], "-1", 2) == 0) {
		upper = 0;
	}
	else if (strncmp(argv[1], "-u", 2) == 0) {
		upper = 1;
	}
	else {
		printf("Invalid argument\n");
		printf("USAGE: %s %s\n", argv[0], USAGE);
		fclose;
		return ERROR_CODE;
	}


	while((ch = fgetc(f)) != EOF ) {
		printf("%c", ch);
	}	



	return 0;

}