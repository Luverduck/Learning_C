// 11.4 ���ڿ��� �Է¹޴� �پ��� �����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// fgets�� ��ȯ��
	char str[5];

	printf("%p\n", str);

	printf("%p\n", fgets(str, 5, stdin));

	return 0;
}