#include <stdio.h>

int main(void) {
	int x = 10, y = 10;
	printf("x = %d\n", x); // x = 10
	printf("++ x의 값 = %d\n", ++ x); // ++ x = 11, x = 11
	printf("x = %d\n", x); // x = 11
	printf("x ++의 값 = %d\n", x ++); // x = 11, x ++ = 12
	printf("x = %d\n", x); // x = 12

	printf("y = %d\n", y); // y = 10
	printf("-- y의 값 = %d\n", -- y); // -- y = 9, y = 9, 
	printf("y = %d\n", y); // y = 9
	printf("y --의 값 = %d\n", y --); // y = 9, y -- = 8
	printf("y = %d\n", y); // y = 8

	x = 10;
	printf("%d\n", (1 + x ++) + 2); // 13
	printf("%d\n", x); // x = 11

	x = 10;
	printf("%d\n", (1 + ++ x) + 2); // 14
	printf("%d\n", x); // x = 11

	x = 10;
	printf("x = %d\n", x); // x = 10
	y = (1 + x ++) + 10;
	printf("y = %d\n", y); // y = 21

	// x = 10 ++; // 성립 불가
	// y = (x + 1) ++; // 성립 불가
	return 0;
}