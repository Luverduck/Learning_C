// 7.7 �� ������ Logical Operator
/*
	�� ������ (Logical Operator)
	&&	: AND ����
	||	: OR ����
	!	: ���� ����
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h> // bool

int main(void)
{
	// �� ������ ����

	bool test1 = 3 > 2 && 5 > 6;
	printf("result of test1 : %d\n", test1);
	// ��� : 0 (false)

	bool test2 = 3 > 2 || 5 > 6;
	printf("result of test2 : %d\n", test2);
	// ��� : 1 (true)

	bool test3 = !(5 > 6);
	printf("result of test3 : %d\n", test3);
	// ��� : 1 (true)

	return 0;
}