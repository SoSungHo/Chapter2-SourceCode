/* stillbad.c -- a program with its syntax errors fixed */
// semantic error를 확인하는 실습 cubed = n*n*n인데 코딩을 잘 못한 경우
#include <stdio.h>
int main(void) 
{
	int n, n2, n3;    /* this program has a semantic error */
	n = 5;
	n2 = n * n;
	n3 = n2 * n2;	 // correct form is: n*n*n
	printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);
	getchar();
	return 0;
}
