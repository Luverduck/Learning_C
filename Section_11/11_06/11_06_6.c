// 11.6 �پ��� ���ڿ� �Լ���
/*
	��Ÿ ���ڿ� �Լ�

	sprintf �Լ�
	����ȭ�� ����� ��� ���ڿ��� �����Ѵ�.
	int sprintf( char *str, const char *format [,argument] ... );
	- str: ����� ������ ���ڿ��� �ּ�
	- format : ���� ������
	- argument : ���� �������� ��ҿ� �����ϴ� �μ�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[100] = "";
	int i = 123;
	double d = 3.14;

	sprintf(str, "%05d.png %f", i, d);

	printf("%s\n", str);

	return 0;
}
