
#include <stdio.h>

#define MAX_NAME_LEN 50

struct Student {
	int id;
	unschar name[MAX_NAME_LEN];
	unsigned char enrolled_num;
	float gpa; 
}

int main(int argc, char **argv){
        struct Student student= { 1234456, "Name FamilyN", 3, 5.6};
        printf("%d : %s : %d : %.2f\n", student.id, student.name, student.enrolled_num,
						student.gpa);
        return 0;
}


