// 9.6 ��� ȣ��
/*
	��� ȣ�� (recursive call)
	�Լ� ���ο��� �Լ��� �ڱ� �ڽ��� ȣ���ϴ� ����
	��� ȣ���� ���Ե� �Լ��� ��� �Լ�(recursion function)�� �Ѵ�.
	��� ȣ�� ��, ���� ������ ������� ������ ������ ��� ä���� ������ ȣ���� �ݺ��Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int my_func(int);

int main(void)
{
	my_func(1);

	return 0;
}

int my_func(int n)
{
	// ���� ȣ�� Level�� n�� �ּҸ� ���
	printf("Level %d, address of variable n = %p\n", n, &n);

	// ��� ȣ���� ���� ������ ���
	if (n <= 4)
	{
		// n�� �������� ��� ȣ��
		my_func(n + 1);
	}
};