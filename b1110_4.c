#include <stdio.h>

int main(void) {
	int x, y;

	printf("두 개의 정수를 입력하시오: ");
	scanf_s("%d%d", &x, &y); // 3, 4

	// 0이 아닌 모든 값이 TRUE(1), 음수여도 TRUE
	printf("%d && %d의 결과값: %d\n", x, y, x && y); // x와 y가 0이 아닌 값이므로 1
	printf("%d || %d의 결과값: %d\n", x, y, x || y); // x 또는 y가 0이 아닌 값이므로 1
	printf("!%d의 결과값: %d\n", x, !x); // x가 0이 아닌 값이므로 부정하면 0
	printf("!0의 결과값: %d\n", !0); // 1
	printf("!3의 결과값: %d\n", !3); // 0
	printf("!-3의 결과값: %d\n", !-3); // 0

	return 0;
}