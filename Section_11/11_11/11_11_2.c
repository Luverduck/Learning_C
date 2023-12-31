// 11.11 ���ڿ��� ���ڷ� �ٲٴ� �����
/*
	���ڿ��� ���ڷ� �ٲٴ� �Լ�

	strol �Լ� (string to long)
	��� ���ڿ����� ������� ���ڸ� `base`������ ���ڷ� �ؼ��Ͽ� `long`�� ��ȯ�Ѵ�.
	���ڷ� �ؼ��� �� ���� ���ڸ� �߰��ϸ� �ش� ������ �ּҸ� `end`�� �����ϰ� ��ȯ�� `long`�� ��ȯ�� �� ������ �����Ѵ�.
	long strtol( const char *str, char **end, int base );
	- str : ��� ���ڿ�
	- end : ���ڷ� �ؼ��� �� ���� ������ �ּ�
	- base : ���� �ؼ��� ����� ���
	- [return] long : ��ȯ�� ��

	strtoul �Լ� (string to unsigned long)
	��� ���ڿ����� ������� ���ڸ� `base`������ ���ڷ� �ؼ��Ͽ� `unsigned long`�� ��ȯ�Ѵ�.
	���ڷ� �ؼ��� �� ���� ���ڸ� �߰��ϸ� �ش� ������ �ּҸ� `end`�� �����ϰ� ��ȯ�� `unsigned long`�� ��ȯ�� �� ������ �����Ѵ�.
	unsigned long strtoul( const char *str, char **end, int base );
	- str : ��� ���ڿ�
	- end : ���ڷ� �ؼ��� �� ���� ������ �ּ�
	- base : ���� �ؼ��� ����� ���
	- [return] unsigned long : ��ȯ�� ��

	strtod �Լ� (string to double)
	��� ���ڿ����� ������� ���ڸ� 10������ ���ڷ� �ؼ��Ͽ� `double`�� ��ȯ�Ѵ�.
	���ڷ� �ؼ��� �� ���� ���ڸ� �߰��ϸ� �ش� ������ �ּҸ� `end`�� �����ϰ� ��ȯ�� `double`�� ��ȯ�� �� ������ �����Ѵ�.
	double strtod( const char *str, char **end );
	- str : ��� ���ڿ�
	- end : ���ڷ� �ؼ��� �� ���� ������ �ּ�
	- [return] double : ��ȯ�� ��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // atoi(), atof(), atol()

int main(int argc, char* argv[])
{
	// strol �Լ� (string to long)
	char str_1[] = "1024hello";
	char* end_1;
	long result_1 = strtol(str_1, &end_1, 10);
	printf("%s %ld %s\n", str_1, result_1, end_1);

	// strtoul �Լ�(string to unsigned long)
	char str_2[] = "1024hello";
	char* end_2;
	unsigned long result_2 = strtoul(str_2, &end_2, 16); // (1 * 16^3) + (0 * 16^2) + (2 * 16^1) + (4 * 16^0)
	printf("%s %ld %s\n", str_2, result_2, end_2);

	// strtod �Լ� (string to double)
	char str_3[] = "1024hello";
	char* end_3;
	double result_3 = strtod(str_3, &end_3); // strtod�� base�� ������ �� ����.
	printf("%s %f %s\n", str_3, result_3, end_3);

	return 0;
}