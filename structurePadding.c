#include <stdio.h> 

// char     1 byte 
// short int  2 bytes 
// int     4 bytes 
// double    8 bytes 

// structure A 
typedef struct structa_tag { 
	char c; 
	short int s; 
} structa_t; 

// structure B 
typedef struct structb_tag { 
	short int s; 
	char c; 
	int i; 
} structb_t; 

// structure C 
typedef struct structc_tag { 
	char c; 
	double d; 
	int s; 
} structc_t; 

// structure D 
typedef struct structd_tag { 
	double d; 
	int s; 
	char c; 
} structd_t; 

int main() 
{ 
	printf("sizeof Structure A = %lu\n", sizeof(structa_t)); 
	printf("sizeof Structure B = %lu\n", sizeof(structb_t)); 
	printf("sizeof Structure C = %lu\n", sizeof(structc_t)); 
	printf("sizeof Structure D = %lu\n", sizeof(structd_t)); 

	return 0; 
}
/*
explanation:
Size of Structure A = Size of (char + short int) = 1 + 2 = 3.
Size of Structure B = Size of (short int + char + int) = 2 + 1 + 4 = 7.
Size of Structure C = Size of (char + double + int) = 1 + 8 + 4 = 13.
Size of Structure A = Size of (double + int + char) = 8 + 4 + 1= 13.
output:
sizeof Structure A = 4
sizeof Structure B = 8
sizeof Structure C = 24
sizeof Structure D = 16
*/
