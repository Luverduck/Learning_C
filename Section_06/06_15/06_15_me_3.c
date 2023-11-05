// 6.15 중첩된 루프들
/*
	TO DO : 다음과 같이 출력
	A B C D E F G H I J K L
	B C D E F G H I J K L
	C D E F G H I J K L
	D E F G H I J K L
	E F G H I J K L
	F G H I J K L
	G H I J K L
	H I J K L
	I J K L
	J K L
	K L
	L
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_ROWS 11
#define FIRST_CHAR 'A'
#define LAST_CHAR 'L'

int main(void)
{
	for (int i = 0; i <= NUM_ROWS; ++i) {
		for (int j = FIRST_CHAR + i; j <= LAST_CHAR; ++j) {
			printf("%c ", j);
		}
		printf("\n");
	}

	return 0;
}