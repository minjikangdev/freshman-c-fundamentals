#include <stdio.h>

int main(void) {
	float r, a;

	printf("반지름을 입력하시오: ");
	scanf_s("%f", &r);

	a = r * r * 3.14;

	printf("원의 면적: %f", a);

	return 0;
}