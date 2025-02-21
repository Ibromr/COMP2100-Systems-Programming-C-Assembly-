#include  <stdio.h>

struct Time {
	unsigned char hour : 4;  // 2^4  = 16 
 	unsigned char minute: 6;	// 2^6 = 64
	unsigned char second : 6;	// 2^6 = 64 
	unsigned short millisecond : 10; // 2^10 = 1024
	unsigned char isAm : 1;     // 2^1 = 2
};

int main(int argc, char **argv){
	struct Time time_record = { 11, 31, 53, 924, 1};
	printf("%d : %d : %d\n ", time_record.hour, time_record.minute,
					time_record.second);
	return 0;
}

