#include <stdio.h>

int main(void) {
	int num;
	printf("정수 입력: ");
	scanf_s("%d", &num);
	if(num >= 0)
		printf("%d: 양수", num);
	if(num < 0)
		printf("%d: 음수", num);
	return 0;
}