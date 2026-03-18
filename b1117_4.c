#include <stdio.h>

int main(void) {
	int big, small;
	printf("정수 입력: ");
	scanf_s("%d", &big);
	printf("정수 입력: ");
	scanf_s("%d", &small);
	if (big < small) {
		int temp = big;
		big = small;
		small = temp;
	}
	printf("big = %d, small = %d", big, small);
	return 0;
}