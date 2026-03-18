/* 두 개의 숫자의 합을
계산하는 프로그램 */

#include <stdio.h>
int main(void)
{   // 선언(준비)
	/* int x; // 첫 번째 정수를 저장할 변수
	int y; // 두 번째 정수를 저장할 변수
	int sum; // 두 정수의 합을 저장하는 변수 */

	int x; int y; int sum; // int x, y, sum;


	// 입력
	x = 100; // int x = 100; // 선언 + 입력
	y = 200;

	

	// 계산
	sum = x + y; // 300

	// 출력
	printf("두 수의 합: %d %d\n", sum, 10 + 20); // 300 30
	printf("두 수의 합: %d 합(sum) = %d\n", 10 + 20, sum); // 30 300

	return 0;
}