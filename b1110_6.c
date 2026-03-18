#include <stdio.h>

int main(void) {
	int i;
	double f;

	f = 5 / 4; // 1 --> 1.000000
	printf("(5 / 4) = %lf\n", f); // 1.000000

	f = (double)5 / 4; // 1.250000
	printf("(double)5 / 4 = %lf\n", f);

	i = 1.3 + 1.8; // 3
	printf("1.3 + 1.8 = %d\n", i);

	i = (int)1.3 + (int)1.8; // 1 + 1
	printf("(int)1.3 + (int)1.8 = %d\n", i);

	return 0;
}