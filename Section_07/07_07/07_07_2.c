// 7.7 �� ������ Logical Operator
/*
	�� ������ (Logical Operator)
	&&	: AND ����
	||	: OR ����
	!	: ���� ����
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define PERIOD '.'

int main(void)
{
	// TO DO : �Է��� ���ڿ��� �� ���� ����
	char ch;
	int count = 0;

	while ((ch = getchar()) != PERIOD) { // ��ħǥ(.)�� �Էµ� ������ �Է��� �޴´�.
		// �ٹٲ�(\n)�� ���ڷ� ���ԵǹǷ� ���� ������ �������� �� ū ���� ��µȴ�.
		count++;
	}

	printf("%d", count);

	return 0;
}