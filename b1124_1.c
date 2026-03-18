#include <stdio.h>

int main(void) {
	int jumsu;
	char grade;

	scanf_s("%d", &jumsu);


	if (jumsu <= 100 && jumsu >= 90)
		grade = 'A';
	else if (jumsu <= 89 && jumsu >= 80)
		grade = 'B';
	else if (jumsu <= 79 && jumsu >= 70)
		grade = 'C';
	else if (jumsu <= 69 && jumsu >= 0)
		grade = 'F';
	else
		grade = 'X';

/*
	if (jumsu >= 90)
		grade = 'A';
	if (jumsu >= 80)
		grade = 'B';
	if (jumsu >= 70)
		grade = 'C';
	else
		grade = 'F';

	if (jumsu >= 90)
		grade = 'A';
	if (jumsu <= 89 && jumsu >= 80)
		grade = 'B';
	if (jumsu < 80 && jumsu >= 70)
		grade = 'C';
	if (jumsu < 70 && jumsu >= 60)
		grade = 'D';
*/

	printf("점수: %d, 학점: %c", jumsu, grade);

	return 0;
}