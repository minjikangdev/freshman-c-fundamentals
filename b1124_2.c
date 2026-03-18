#include <stdio.h>

int main(void) {
	int jumsu;
	char grade;

	scanf_s("%d", &jumsu);

	switch (jumsu / 10) {
		case 10:
		case 9:
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		default:
			grade = 'F';
	}

	printf("점수: %d, 학점: %c", jumsu, grade);

	return 0;
}