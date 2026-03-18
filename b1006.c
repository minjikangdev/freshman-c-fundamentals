#include <stdio.h>

int main(void) {
	int x;
	printf("변수 x: %d\n", sizeof(x));
	printf("char형: %d\n", sizeof(char));
	printf("int형: %d\n", sizeof(int));
	printf("short형: %d\n", sizeof(short));
	printf("long형: %d\n", sizeof(long));
	printf("long long형: %d\n", sizeof(long long));
	printf("float형: %d\n", sizeof(float));
	printf("double형: %d\n", sizeof(double));
	return 0;
}