/*  nogood.c -- a program with errors */
// syntax 오류를 확인하고 에러 메시지를 확인 => 처음에는 매우 어렵다
// 오류를 제거하는 실습
#include <stdio.h>
int main(void)
(
		int n, int n2, int n3;
	/* this program has several errors */
	n = 5;
	n2 = n * n;
	n3 = n2 * n2;
	printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3)
	getchar();
	return 0;
)
