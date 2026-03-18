#include <stdio.h>

int main(void) {
	int num1, num2, min;
	min = 0;
	scanf_s("%d%d", &num1, &num2);
	if (num1 > num2)
		min = num2;
	if (num1 < num2)
		min = num1;
	printf("최소치: %d", min);
	return 0;
}