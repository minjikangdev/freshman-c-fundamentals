#include <stdio.h>
#include <limits.h>

int main(void) {
	short s_money = SHRT_MAX; // 최댓값으로 초기화한다. 32767
	unsigned short u_money = USHRT_MAX; // 최댓값으로 초기화한다. 65535

	s_money = s_money + 1; // overflow
	printf("s_money = %d\n", s_money); // -32768

	u_money = u_money + 1; // overflow
	printf("u_money = %d", u_money); // 0
	return 0;
}