// 9.5 ���� ������ ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int int_max(int i, int j)
{
	int m;
	m = i > j ? i : j;
	return m;
};

int main(void)
{
	int a;

	a = int_max(1, 2);

	{
		int b;

		b = int_max(4, 5);

		{
			int b = 123;
		}

		{
			int c = 456;
		}

	}

	return 0;
}