// 4.10 scanf() �Լ��� ����
/*
	scanf �Լ�
	int scanf( const char *format, ... );
	- format : ���� ������
	- ... : ���� �μ�
	- [return] int : �б⿡ ������ ����
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <inttypes.h> // intmax_t

int main(void)
{
	// ���� �б�
	char c;
	scanf("%c", &c);
	printf("%i\n", c);

	return 0;
}