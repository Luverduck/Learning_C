// 9.7 ��� ȣ��� ����
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
	printf("Level %d, address of variable n = %d\n", n, (int) &n);

	if (n < 4)
	{
		my_func(n + 1);
	}

	printf("Level %d, address of variable n = %d\n", n, (int) &n);
};