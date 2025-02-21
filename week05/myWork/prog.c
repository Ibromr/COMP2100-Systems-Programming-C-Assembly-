#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Step 1: Allocate memory for 3 pointers
    char **dArr = (char **) malloc(sizeof(char *) * 3);
    
    // Buffer to store user input
    char buf[100];

    // Step 2: Get input for the first string
    printf("Enter first string: ");
    scanf("%s", buf);
    dArr[0] = (char *)malloc(strlen(buf) + 1);
    strcpy(dArr[0], buf);

    // Step 3: Get input for the second string
    printf("Enter second string: ");
    scanf("%s", buf);
    dArr[1] = (char *)malloc(strlen(buf) + 1);
    strcpy(dArr[1], buf);

    // Step 4: Get input for the third string
    printf("Enter third string: ");
    scanf("%s", buf);
    dArr[2] = (char *)malloc(strlen(buf) + 1);
    strcpy(dArr[2], buf);

    // Print the stored strings
    printf("\nStored strings:\n");
    for(int i = 0; i < 3; i++) {
        printf("String %d: %s\n", i + 1, dArr[i]);
    }

    // Free allocated memory
    for(int i = 0; i < 3; i++) {
        free(dArr[i]);
    }
    free(dArr);

    return 0;
}
