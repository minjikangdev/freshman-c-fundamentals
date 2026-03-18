#include <stdio.h>

int main(void)
{
	char code1 = 'A'; // 문자 상수로 초기화 01000001
	char code2 = 65; // 아스키코드로 초기화 01000001

	printf("code1 = %c\n", code1); // A
	printf("code1 = %d\n", code1); // 65
	printf("code2 = %c\n", code2); // A
	printf("code1 + 2 = %c\n", code1 + 2); // C
	printf("code1 + 2 = %d\n", code1 + 2); // 67
	return 0;
}