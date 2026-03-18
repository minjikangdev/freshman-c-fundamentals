#include <stdio.h>

int main(void) {
	int num;
	printf("Á¤¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À: ");
	scanf_s("%d", &num);
	if (num % 2 == 0)
		printf("%d: Â¦¼ö", num);
	else
		printf("%d: È¦¼ö", num);
	// if (num % 2 != 0)
		// printf("%d: È¦¼ö", num);
	return 0;
}