#include <stdio.h>

int main(void) {
	int num;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);
	if (num % 3) // 0은 false, 0이 아닌 값은 모두 true
		printf("%d: 3의 배수가 아님", num);
	else
		printf("%d: 3의 배수", num);
	return 0;
}