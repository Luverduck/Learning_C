// 11.11 ���ڿ��� ���ڷ� �ٲٴ� �����
/*
	���ڿ��� ���ڷ� �ٲٴ� �Լ�

	atoi �Լ� (string to integer)
	��� ���ڿ����� ������� ���ڸ� ���ڷ� �ؼ��Ͽ� `int`�� ��ȯ�Ѵ�.
	���ڷ� �ؼ��� �� ���� ���ڸ� �߰��ϸ� ��ȯ�� `int`�� ��ȯ�� �� ������ �����Ѵ�.
	int atoi( const char *str );
	- str : ��� ���ڿ�
	- [return] int : ��ȯ�� ��

	atof �Լ� (string to float)
	��� ���ڿ����� ������� ���ڸ� ���ڷ� �ؼ��Ͽ� `double`�� ��ȯ�Ѵ�.
	���ڷ� �ؼ��� �� ���� ���ڸ� �߰��ϸ� ��ȯ�� `double`�� ��ȯ�� �� ������ �����Ѵ�.
	double atof( const char *str );
	- str : ��� ���ڿ�
	- [return] double : ��ȯ�� ��

	atol() : string to long
	��� ���ڿ����� ������� ���ڸ� ���ڷ� �ؼ��Ͽ� `long`���� ��ȯ�Ѵ�.
	���ڷ� �ؼ��� �� ���� ���ڸ� �߰��ϸ� ��ȯ�� `long`�� ��ȯ�� �� ������ �����Ѵ�.
	long atol( const char *str );
	- str : ��� ���ڿ�
	- [return] long : ��ȯ�� ��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // atoi(), atof(), atol()

int main(int argc, char* argv[])
{
	// atoi �Լ�
	char str_1[] = "1024hello";
	int result_1 = atoi(str_1);
	printf("%d\n", result_1);

	// atof �Լ�
	char str_2[] = "10.54ab33";
	double result_2 = atof(str_2);
	printf("%f\n", result_2);

	// atol �Լ�
	char str_3[] = "102433132131";
	long result_3 = atol(str_3);
	printf("%ld\n", result_3);

	return 0;
}