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
	// signed vs unsigned
	/*unsigned char uc;
	scanf("%i", &uc);
	printf("%i\n", uc);*/

	char c;
	scanf("%u", &c);
	printf("%u\n", c);

	return 0;
}