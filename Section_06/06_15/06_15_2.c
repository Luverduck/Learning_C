// 6.15 ��ø�� ������
/*
	TO DO : ������ ���� ���
	A
	A B
	A B C
	A B C D
	A B C D E
	A B C D E F
	A B C D E F G
	A B C D E F G H
	A B C D E F G H I
	A B C D E F G H I J
	A B C D E F G H I J K
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_ROWS 11
#define FIRST_CHAR 'A'
#define LAST_CHAR 'K'

int main(void)
{
	int r; // row loop
	int c; // character loop

	// outer row loop
	for (r = 0; r < NUM_ROWS; ++r) {
		// inner character loop
		for (c = FIRST_CHAR; c <= FIRST_CHAR + r; ++c) { // r = 0, c = 65�̸� 65 <= 65 + 0�� true�̹Ƿ� ���� ���� ���๮�� ����ȴ�.
			printf("%c ", c);
		}
		printf("\n");
	}

	return 0;
}