/* 데이터형 프로그램 */

#include <stdio.h>
int main(void)
{
	char a = 'k';

//	printf("%d\n", 10); // 10
//	printf("%f\n", 3.14); // 3.140000
//	printf("%c\n", 'a'); // a
//	printf("%c\n", a); // k
//	printf("%s\n", "abc"); // abc

	printf("123456789012345\n");
	printf("%d\n", 123); // 123

	printf("%f\n", 123); // 오류 type mismatch

	printf("%10d\n", 123); //        123, 오른쪽 정렬
	printf("%-10d\n", 123); // 123
	printf("%  -10d\n", 123); //  123

	printf("%f\n", 1.23456789); // 1.234568

	printf("%d\n", 1.23456789); // 오류 type mismatch

	printf("%.3f\n", 1.23456789); // 1.235
	printf("%10.3f\n", 1.23456789); //      1.235, 오른쪽 정렬
	printf("%-10.3f\n", 1.23456789); // 1.235
	return 0;
}