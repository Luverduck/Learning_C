// 16.4 �Լ� ���� ��ũ��
/*
	��ū ���� ������ ## (Token-Pasting Operator)
	�и��Ǿ��ִ� ��ū�� �ϳ��� �����Ѵ�.
*/

#define XNAME(N) X ## N
#define PRINT_XNAME(N) printf("x" #N " = %d\n", X ## N);

#include <stdio.h>
int main(void)
{
	int XNAME(1) = 1;
	// ��ũ�� Ȯ�� ��� : int x1 = 1;
	int XNAME(2) = 2;
	// ��ũ�� Ȯ�� ��� : int x2 = 2;

	PRINT_XNAME(1);
	// printf("x1 = %d\n", x1);
	PRINT_XNAME(2);
	// printf("x2 = %d\n", x2);

	return 0;
}