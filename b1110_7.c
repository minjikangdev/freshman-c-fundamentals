#include <stdio.h>

int main(void) {
	char c;
	int i;
	float f;

	c = 10000; // 내림 변환
	i = 1.23456 + 10; // 11, 내림 변환
	f = 10 + 20; // 30.000000 올림 변환
	printf("c = %d, i = %d, f = %f", c, i, f);

	return 0;
}