// 5.7 ������ ������
/*
	������ ������
	%	: ������ �ǿ����ڿ� �������� �ǿ����ڷ� ���� �������� ���Ѵ�.

	������ �������� Ư¡
	1. �Ǽ��� ������ ������ ������� �ʴ´�. (������ ������ ������ ���길 ����)
	2. ������ ���� ����� ��ȣ�� ù ��° �ǿ������� ��ȣ�� ����.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// ������ ������ ������ ����
	int num_int_1 = 10;
	int num_int_2 = 4;
	printf("%d\n", num_int_1 % num_int_2);

	// �Ǽ��� �Ǽ��� ������ ����
	double num_double_1 = 4.5;
	double num_double_2 = 2.0;
	printf("%f\n", num_double_1 % num_double_2);
	// expression must have integral or unscoped enum type

	// ������ �Ǽ��� ������ ����
	printf("%f\n", num_int_1 % num_double_1);
	// expression must have integral or unscoped enum type

	return 0;
}