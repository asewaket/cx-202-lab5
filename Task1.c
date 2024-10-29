#include <stdio.h>

int main(){
	
	char chArr[4];
	int intArr[4];
	short shArr[4];
	double doArr[4];
	
	//for character array
	printf("character array:\n");
	for (int i = 0; i < 4; i++) {
		printf("%p\n", &chArr[i]);
	}

	//for integer array
	printf("integer array:\n");
	for (int i = 0; i < 4; i ++) {
		printf("%p\n", &intArr[i]);
	}

	//for short array
	printf("short array:\n");
	for (int i = 0; i < 4; i++) {
		printf("%p\n", &shArr[i]);
	}

	//for double array
	printf("double array:\n");
	for (int i = 0; i < 4; i++) {
		printf("%p\n", &doArr[i]);
	}

	return 0;
}
