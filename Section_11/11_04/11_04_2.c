// 11.4 ���ڿ��� �Է¹޴� �پ��� �����
/*
	gets / gets_s
	���� ���� '\n' �Ǵ� EOF�� �߰��� ������ ǥ�� �Է� ��Ʈ�� stdin�� �а� buffer�� �����Ѵ�.
	�Լ� ���� ����� ��ȯ�ϱ� �� ���� ���� '\n'�� �� ���� '\0'�� ġȯ�Ѵ�.

	puts
	���ڿ� str�� ǥ�� ��� ��Ʈ�� stdout�� ����Ѵ�.
	���ڿ��� ����ϱ� �� �� ���� '\0'�� ���� ���� '\n'�� ġȯ�Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[100];

	// char *gets( char *str );
	// char* gets_s( char *str, rsize_t size );
	// buffer : ���ڿ��� ������ �ּ�
	// size : ���ڿ��� ����
	gets(str);
	gets_s(str, sizeof(str));

	// int puts(const char* str);
	// str : ����� ���ڿ��� �ּ�
	puts(str);

	return 0;
}