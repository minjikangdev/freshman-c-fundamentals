#include <stdio.h>

int main(void) {
	int kor, eng, mat, sum;
	float avg;
	char grade;

	printf("kor = ");
	scanf_s("%d", &kor);
	printf("eng = ");
	scanf_s("%d", &eng);
	printf("mat = ");
	scanf_s("%d", &mat);

	sum = kor + eng + mat;
	avg = sum / 3.;

	if (avg <= 100 && avg >= 90)
		grade = 'A';
	else if (avg <= 89 && avg >= 80)
		grade = 'B';
	else if (avg <= 79 && avg >= 70)
		grade = 'C';
	else if (avg <= 69 && avg >= 0)
		grade = 'F';
	else
		grade = "점수 오류";

	printf("국어 영어 수학 총점 평균 학점\n%d   %d   %d   %d   %.2f   %c", kor, eng, mat, sum, avg, grade);

	return 0;
}