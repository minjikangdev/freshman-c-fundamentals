#include <stdio.h>

int main(void) {
	int n, i;

	for(n = 2; n <= 9; n ++) {
		for (i = 1; i <= 9; i++)
			printf("%d * %d = %d (for문)\n", n, i, n * i);
		printf("\n");
	}

	printf("\n");

	n = 2;
	while (n <= 9) {
		i = 1;
		while (i <= 9) {
			printf("%d * %d = %d (while문)\n", n, i, n * i);
			i++;
		}
		printf("\n");
		n++;
	}
	
	return 0;
}