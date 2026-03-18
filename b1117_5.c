#include <stdio.h>

int main(void) {
	int num1, num2, max, min;
	printf("정수 입력: ");
	scanf_s("%d", &num1);
	printf("정수 입력: ");
	scanf_s("%d", &num2);
	if (num1 > num2) {
		max = num1;
		min = num2;
	}
	else {
		max = num2;
		min = num1;
	}
	printf("max = %d\nmin = %d", max, min);
	return 0;
}