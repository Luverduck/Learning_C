// 11.4 ���ڿ��� �Է¹޴� �پ��� �����
/*
	fgets
	���� ���� '\n' �Ǵ� EOF�� �߰��ϰų� ���� ������ ���� num - 1�� �� ������ 
	�Է� ��Ʈ�� stream�� �а� ���� ���� '\n'�� �����Ͽ� str�� �����Ѵ�.

	fputs
	���ڿ� str�� ���� ��ġ�� ��� ��Ʈ���� ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[100];

	// char *fgets( char *str, int num, FILE *stream );
	// str : ���ڿ��� ������ �ּ�
	// num : �ִ� ���� ������ �� (�� ���ڸ� ������ num - 1 ���� ���ڸ� �д´�)
	// stream : �Է� ��Ʈ��
	fgets(str, 5, stdin);

	// int fputs( const char *str, FILE *stream );
	// str : ����� ���ڿ��� �ּ�
	// stream : ��� ��Ʈ��
	fputs(str, stdout);

	return 0;
}