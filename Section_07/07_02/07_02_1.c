// 7.2 ǥ�� ����� �Լ��� getchar(), putchar() ����
/*
	int getchar(void);
	ǥ�� �Է� ��Ʈ���� ���� ��ġ ���ڸ� �д´�.

	int putchar(int ch);
	ǥ�� ��� ��Ʈ���� ���� ��ġ�� ���ڸ� ����.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // getchar(), putchar()
int main()
{
	char ch;

	// ���� �ϳ��� �а� ch�� ����
	ch = getchar();

	// ���ڷ� ���� ���ڸ� ���
	putchar(ch);

	return 0;
}