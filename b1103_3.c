#include <stdio.h>

int main(void)
{
	int x, y, result;
	float avg;

	result = 0;
	printf("두 개의 정수를 입력하시오: \n");
	scanf_s("%d %d", &x, &y); // x = 7, y = 4

	result = 0;
	result = x + y;
	printf("%d + %d = %d\n", x, y, result); // 11

	result = 0;
	result = x - y;
	printf("%d - %d = %d\n", x, y, result); // 3

	result = 0;
	result = x * y;
	printf("%d * %d = %d\n", x, y, result); // 28
	
	avg = x / (float)y;
	printf("%d / %d = %.2f\n", x, y, avg); // 1.75

	result = 0;
	result = x % y;
	printf("%d %% %d = %d\n", x, y, result); //

	return 0;
}