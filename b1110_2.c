#include <stdio.h>

int main(void) {
	int x, y;
	printf("두 개의 정수를 입력하시오: ");
	scanf_s("%d%d", &x, &y); // x = 3, y = 4

	printf("x == y의 결과값: %d\n", x == y); // 0
	printf("결과값: %d\n", 2 < x < 5); // 오류, 2 < x = 1이기 때문에 1 < 5도 1, x > 2 && x < 5

	printf("x != y의 결과값: %d\n", x != y); // 1
	printf("x > y의 결과값: %d\n", x > y); // 0
	printf("x < y의 결과값: %d\n", x < y); // 1
	printf("x >= y의 결과값: %d\n", x >= y); // 0
	printf("x <= y의 결과값: %d\n", x <= y); // 1

	return 0;
}