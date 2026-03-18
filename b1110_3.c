#include <stdio.h>
#include <math.h>

int main(void) {
	double a, b;
	a = 1.1 + 0.1;
	b = 1.2;
	printf("a == b의 결과: %d\n", a == b); // 0
	printf("a = %lf\n", a);
	printf("b = %lf\n", b);
	printf("fabs(a - b) < 0.00001의 결과: %d\n", fabs(a - b) < 0.00001); // 1

	return 0;
}