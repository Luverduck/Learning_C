// 7.7 �� ������ Logical Operator
/*
	�ּ� ��(minimal evaluation) �Ǵ� �ܶ� ��(short circuit evaluation)
	ù ��° �μ��� ��ü ǥ������ ���� �����ϱ⿡ ������� ���� ��쿡�� �� ��° �μ��� ��
	- &&�� ||�� sequence point�� ������.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	// �ּ� �� ���� 2
	int x = 1, y = 2;

	// 1) x > 0 �� �� x++(���� ����)�� ���� x = x + 1 = 2 (sequence point)
	// 2) x + y = 2 + 2 = 4 �̹Ƿ� ��ü ǥ������ ��� 1
	if (x++ > 0 && x + y == 4) {
		printf("%d %d\n", x, y);
	}

	return 0;
}