// 9.8 ���丮�� ����
/*
	factorial
	0! = 1
	3! = 3 * 2 * 1
	5! = 5 * 4! 
	   = 5 * 4 * 3! 
	   = 5 * 4 * 3 * 2! 
	   = 5 * 4 * 3 * 2 * 1! 
	   = 5 * 4 * 3 * 2 * 1 * 0!
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �ݺ������� ������ ���丮�� �Լ�
long loop_factorial(int n);

// ��� ȣ��� ������ ���丮�� �Լ�
long recursive_factorial(int n);

int main(void)
{
	int n = 5;

	printf("%d! = %ld\n", n, loop_factorial(5));
	printf("\n");
	printf("%d! = %ld\n", n, recursive_factorial(5));

	return 0;
}

// �ݺ������� ������ ���丮�� �Լ�
long loop_factorial(int n)
{
	long ans;
	for (ans = 1; n > 1; n--)
		ans *= n;
};

// ��� ȣ��� ������ ���丮�� �Լ�
long recursive_factorial(int n)
{
	if (n > 1)
		return n * recursive_factorial(n - 1);
	else
		return 1;
};