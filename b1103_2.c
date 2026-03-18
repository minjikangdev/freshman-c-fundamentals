#include <stdio.h>

int main(void)
{
	int x, y, z, sum; // 초기화
	float avg;
	sum = 0;

	printf("3개의 정수를 입력하세요 (x, y, z): ");
	scanf_s("%d %d %d", &x, &y, &z); // 10, 20, 32
	sum += x;
	sum += y;
	sum += z;
	avg = sum / 3.; // 20.666666

	printf("3개 정수의 합은 %d\n", sum); // 62
	printf("3개 정수의 평균은 %f\n", avg);
	return 0;
}