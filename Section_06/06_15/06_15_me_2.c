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

#include <stdio.h>
int main(void)
{
	char c;
	for (int i = 0; i < 11; ++i) {
		for (int j = 0; j < i + 1; ++j) { // i = 0, j = 0�� �� 0 < 0 + 1�� true�̹Ƿ� ���� ���� ���๮�� ����ȴ�.
			c = 'A' + j;
			printf("%c ", c);
		};
		printf("\n");
	};

	return 0;
}