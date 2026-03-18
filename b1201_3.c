#include <stdio.h>

int main(void) {
	int a, asum;
	
	a = 1;
	asum = 0;
	while (a <= 100) {
		asum += a;
		printf("%d %d\n", a, asum);
		a++;
	}

	return 0;
}