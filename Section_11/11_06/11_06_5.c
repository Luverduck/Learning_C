// 11.6 �پ��� ���ڿ� �Լ���
/*
	��Ÿ ���ڿ� �Լ�

	strchr �Լ�
	��� ���ڿ����� Ư�� ���ڸ� ã�´�.
	- str : ��� ���ڿ�
	- c : ã�� ����
	- [return] char* : ã�� ������ �ּ�

	strrchr �Լ�
	��� ���ڿ����� Ư�� ���ڰ� ���������� �߰ߵ� �ּҸ� ��ȯ�Ѵ�.
	char *strrchr( const char *str, int c );
	- str : ��� ���ڿ�
	- c : ã�� ����
	- [return] char* : ã�� ������ �ּ�

	strpbrk �Լ�
	��� ���ڿ����� Ư�� ���� ������ ��Ұ� ó������ �߰ߵ� �ּҸ� ��ȯ�Ѵ�.
	char *strpbrk( const char *str, const char *strBreakSet);
	- str : ��� ���ڿ�
	- strBreakSet : ã�� ���ڵ��� ����
	- [return] char* : ã�� ���ڵ� �� ���� ���� �߰ߵ� ������ �ּ�

	strstr �Լ�
	��� ���ڿ����� Ư�� ���ڿ��� ó������ �߰ߵ� �ּҸ� ��ȯ�Ѵ�.
	char *strstr( const char *str, const char *strSearch );
	- str : ��� ���ڿ�
	- strSearch : ã�� ���ڿ�
	- [return] char* : ã�� ���ڿ��� �ּ�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	printf("%s\n", strchr("Hello, World!", 'W'));

	printf("%s\n", strrchr("Hello, Hello, Hello, World!", 'l'));

	printf("%s\n", strpbrk("Hello, World!", "abcdef"));

	printf("%s\n", strstr("Hello, World!", "Wor"));

	return 0;
}
