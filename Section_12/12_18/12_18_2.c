// 12.18 �ڷ��� �����ڵ� const, volatile, restrict

#include <stdio.h>
int main(void)
{
	// 	volatile
	// �ش� �ĺ����� ��ü�� ���α׷� ������ ��ҿ� ���� ���� �� ������ ��Ÿ����.
	volatile int a = 10;

	return 0;
}