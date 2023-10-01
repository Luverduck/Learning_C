// 3.7 �پ��� ��������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main(void)
{
	// char ���
	char c = 65;
	printf("char = %hhd, %d, %c\n", c, c, c);
	// ��� : char = 65, 65, A
	// %hhd ��� : ���� 65 ��� 
	// %c�� ��� : ASCII �ڵ� 65���� �����ϴ� ���ڿ� 'A' ���

	// short ���
	short s = 200;
	printf("short = %hhd, %hd, %d\n", s, s, s);
	// ��� : short = -56, 200, 200
	// %hhd ��� : char�� �ִ� ǥ�� ���� 128�� �Ѿ�� ������ ���� �����÷ο� �߻�

	// unsigned int ���
	unsigned int ui = 3000000000U;
	printf("unsigned int = %u, %d\n", ui, ui);
	// ��� : unsigned int = 3000000000, -1294967296
	// %d ��� : int�� �ִ� ǥ�� ���� 2147483647�� �Ѿ�� ������ ���� �����÷ο� �߻�

	// long ���
	long l = 65537L;
	printf("long = %ld, %hd\n", l, l);
	// ��� : long = 65537, 1
	// %hd ��� : short�� �ִ� ǥ�� ���� 32767�� �Ѿ�� ������ ���� �����÷ο� �߻�

	// long long ���
	long long ll = 12345678908642LL;
	printf("long long = %lld, %ld\n", ll, ll);
	// ��� : long long = 12345678908642, 1942899938
	// %ld ��� : long�� �ִ� ǥ�� ���� 2147483647�� �Ѿ�� ������ ���� �����÷ο� �߻�

	return 0;
}