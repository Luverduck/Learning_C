// 5.7 ������ ������
/*
	������ ������
	%	: ������ �ǿ����ڿ� �������� �ǿ����ڷ� ���� �������� ���Ѵ�.

	������ �������� Ư¡
	1. �Ǽ��� ������ ������ ������� �ʴ´�. (������ ������ ������ ���길 ����)
	2. ������ ���� ����� ��ȣ�� ù ��° �ǿ������� ��ȣ�� ����.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// ������ ���� ����� ��ȣ
	int div; // ������(division) ���� ���
	int mod; // ������(modulo) ���� ���

	div = 11 / 5;
	mod = 11 % 5;
	printf("div = %d,\t mod = %d\n", div, mod);

	div = 11 / -5;
	mod = 11 % 5;
	printf("div = %d,\t mod = %d\n", div, mod);

	div = -11 / -5;
	mod = -11 % -5;
	printf("div = %d,\t mod = %d\n", div, mod);

	div = -11 / 5;
	mod = -11 % 5;
	printf("div = %d,\t mod = %d\n", div, mod);

	return 0;
}