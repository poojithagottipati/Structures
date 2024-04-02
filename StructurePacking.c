#include <stdio.h> 
#pragma pack(1) 

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
	printf("sizeof(structa_t) = %lu\n", sizeof(structa_t)); 
	printf("sizeof(structb_t) = %lu\n", sizeof(structb_t)); 
	printf("sizeof(structc_t) = %lu\n", sizeof(structc_t)); 
	printf("sizeof(structd_t) = %lu\n", sizeof(structd_t)); 

	return 0; 
}
/*
sizeof(structa_t) = 3
sizeof(structb_t) = 7
sizeof(structc_t) = 13
sizeof(structd_t) = 13
*/
