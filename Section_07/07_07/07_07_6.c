// 7.7 �� ������ Logical Operator
/*
	�ּ� ��(minimal evaluation) �Ǵ� �ܶ� ��(short circuit evaluation)
	ù ��° �μ��� ��ü ǥ������ ���� �����ϱ⿡ ������� ���� ��쿡�� �� ��° �μ��� ��
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	// �ּ� �� ���� 1
	int temp = (1 + 2) * (3 + 4);

	printf("Before : %d\n", temp);

	// ù ��° ǥ���� 'temp == 0'�� �̹� false�̹Ƿ� 
	// �� ��° ǥ���� '++temp == 1024'�� �򰡵��� �ʴ´�.
	// Ȱ�� : A && B ���� A�� ���� ���� �����ؾ� �� ǥ������ B�� �ϴ� ���
	if (temp == 0 && (++temp == 1024)) {
		// do something
	}

	printf("After : %d\n", temp);

	return 0;
}