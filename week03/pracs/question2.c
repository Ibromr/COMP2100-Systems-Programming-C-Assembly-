#include <stdio.h>

	#define MAX_NAME_LENGTH 50
	#define UNIT_CODE_LENGTH 8
	#define MAX_UNITS 2

	// typedef struct {  	 		// how to simplfy a struct
	//	int unit foo;
	// } Assessment;

	struct Unit {
		char code[UNIT_CODE_LENGTH + 1];   // +1 for null terminator
		char name[MAX_NAME_LENGTH];
		float total_mark;
	};

	struct Student {
		int id;
		char name[MAX_NAME_LENGTH];
		int enrolled_num;
		float gpa; 
		
		struct Unit units[MAX_UNITS];			//student.units[0].code
	};

	struct Student student= { .id = 12345678, 
							   .name = "John Citizen", 
							   .enrolled_num = 2, 
							   .gpa = 5.50,
							   .units = {
									{"COMP2100", "Systems Programming", 72}, 
									{"COMP3100", "Distributed Systems", 78}
							    }
	};

	int main(void){		// it is a good practise when you do not have argc and argv to put, do not use them for printing.
		printf("Student: %d : %s : %d : %.2f\n", student.id, student.name, 
												 student.enrolled_num, student.gpa);	

		for (int i = 0; i < student.enrolled_num; i++) {
			printf("Unit %d: %s : %s : %.2f\n", i+1, student.units[i].code, 
													student.units[i].name, 
													student.units[i].total_mark);
		}
		return 0;
	}