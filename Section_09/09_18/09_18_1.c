// 9.18 �������� �Ű�����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 123;
	int b = 456;

	// TODO �� ������ ���� ���� �ٲٱ�
	int temp = a;
	a = b;
	b = temp;

	printf("%d %d", a, b);

	return 0;
}