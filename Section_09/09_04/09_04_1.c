// 9.4 ���� ������ ���� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int int_max(int i, int j);

int main(void)
{
	int a;	// main �Լ� ��Ͽ� ����� ���� a

	a = int_max(1, 2);

	printf("%d\n", a);	// 1-1) ���� a�� ����� ��
	printf("%p\n", &a);	// 1-2) ���� a�� �޸� �ּ�

	{
		int a;	// main �Լ� ��� �� ���� ������ ��Ͽ� ����� ���� a

		a = int_max(4, 5);

		printf("%d\n", a);	// 2-1) ��� �� ���� a�� ����� ��
		printf("%p\n", &a);	// 2-2) ��� �� ���� a�� �޸� �ּ�
	}

	printf("%d\n", a);	// 3-1) ���� ������ ��� �� �ڵ� ���� �� ���� a�� ����� ��
	printf("%p\n", &a);	// 3-2) ���� ������ ��� �� �ڵ� ���� �� ���� a�� �޸� �ּ�

	return 0;
}

int int_max(int i, int j)
{
	int m;
	m = i > j ? i : j;
	return m;
};