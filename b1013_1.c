#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y;
	int sum, diff, mul;
	float div;

	/*
	x = 20;
	y = 10;
	

	scanf_s("%d", &x);
	scanf_s("%d", &y);
	*/

	scanf("%d %d", &x, &y);

	sum = x + y;
	diff = x - y;
	mul = x * y;
	div = x / y;
	// div = 20 / 3.; // 6.666667

	printf("두 수의 합: %d\n", sum);
	printf("두 수의 차: %d\n", diff);
	printf("두 수의 곱: %d\n", mul);
	printf("두 수의 몫: %f\n", div);

	return 0;
}