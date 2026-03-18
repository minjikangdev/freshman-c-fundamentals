#include <stdio.h>

int main(void) {
	char c;

	c = getchar(); // 한 문자 읽기

	switch (c) {
		case 'a':
			printf("\n1");
			break;
		case 'b':
			printf("\n2");
			break;
		case 'c':
			printf("\n3");
			break;
		default:
			printf("\n99");
	}

	return 0;
}