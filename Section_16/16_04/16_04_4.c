// 16.4 �Լ� ���� ��ũ��
/*
	���ڿ�ȭ ������ # (Stringizing Operator)
	��ũ�� �μ��� ���ڿ��� �����.
*/

#define SQUARE(X) ((X)*(X))

// ���ڿ�ȭ �����ڰ� ������� ���� ���
#define PRINT_SQR1(X) printf("The square of %d is %d.\n", X, SQUARE(X));

// ���ڿ�ȭ �����ڰ� ����� ���
#define PRINT_SQR2(X) printf("The square of " #X " is %d.\n", SQUARE(X));

#include <stdio.h>
int main(void)
{
	PRINT_SQR1(10);
	PRINT_SQR2(10);

	return 0;
}