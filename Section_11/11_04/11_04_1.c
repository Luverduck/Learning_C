// 11.4 ���ڿ��� �Է¹޴� �پ��� �����
/*
	scanf
	ǥ�� �Է� ��Ʈ�� stdin�� �а� �μ��� �־��� �ּ��� �޸𸮿� ���� �����Ѵ�.
	format�� ���� �����ڿ� �����ϴ� �ڷ����� �μ��� ����Ű�� �ڷ����� ���ƾ� �Ѵ�.

	printf
	ǥ�� ��� ��Ʈ�� stdout�� ����(��) �Ǵ� ���� ����Ѵ�.
	format�� ���� �����ڿ� �����ϴ� �ڷ����� �μ��� �ڷ����� ���ƾ� �Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[100];

	// int scanf( const char *format, [argument] );
	// format : ���� �����ڸ� ��Ÿ���� ���ڿ�
	// [argument] : ���� ������ �޸� �ּ�
	scanf("%s", str);

	// int printf( const char *format, [argument] );
	// format : ���� �����ڸ� ��Ÿ���� ���ڿ�
	// &[argument] : ����� ����(��) �Ǵ� ��
	printf("%s", str);

	return 0;
}