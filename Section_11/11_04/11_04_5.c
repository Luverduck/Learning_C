// 11.4 ���ڿ��� �Է¹޴� �پ��� �����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// ���ڿ��� ������ ���� �迭�� ���̰� ���� ���
	char str[5];

	fgets(str, 5, stdin); // stdin�κ��� ���� ���� 4�� + �� ���ڸ� str�� �����Ѵ�.

	fputs(str, stdout);

	return 0;	
}