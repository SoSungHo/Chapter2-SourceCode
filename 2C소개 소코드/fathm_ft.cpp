// fathm_ft.c -- converts 2 fathoms to feet
// a fathom = 6 feet
// format ��� �ǵ��� �������� Ȯ��


#include <stdio.h>
int main(void) {
	int feet, fathoms; //1 fathom = 3 feet, 1 feet = 30cm, �Ź�ũ��
	fathoms = 2;
	feet = 6 * fathoms;
	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
	printf("Yes, I said %d feet!\n", 6 * fathoms);
	getchar();
	return 0;
}
