// fathm_ft.c -- converts 2 fathoms to feet
// a fathom = 6 feet
// format 출력 의도를 실행으로 확인


#include <stdio.h>
int main(void) {
	int feet, fathoms; //1 fathom = 3 feet, 1 feet = 30cm, 신발크기
	fathoms = 2;
	feet = 6 * fathoms;
	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
	printf("Yes, I said %d feet!\n", 6 * fathoms);
	getchar();
	return 0;
}
