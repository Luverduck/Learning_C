// 12.18 �ڷ��� �����ڵ� const, volatile, restrict

#include <stdio.h>
int main(void)
{
	// const
	// �ش� �ĺ����� ��ü�� �б� ����(Read - Only)���� ��Ÿ����.

	// 1. �Ϲ� ����
	// �Ϲ� ���� ���� const
	const int a = 1;
	// a = 2;

	// 2. ������ ����
	int b = 1;
	int c = 2;
	// 1) ������ �ڷ��� ���� const
	const int* ptr_1 = &b;
	ptr_1 = &c;
	//*ptr_1 = 2;

	// 2) ������ ������ ���� const
	int* const ptr_2 = &b;
	// ptr_2 = &c;
	*ptr_2 = 2;

	// 3) ������ �ڷ��� �հ� ������ ���� const
	const int* const ptr_3 = &b;
	// ptr_3 = &c;
	// *ptr_3 = 2;

	return 0;
}