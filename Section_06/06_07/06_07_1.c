// 6.7 ���� �������� �켱���� 
/*
	�������� �켱���� (Operator Precedence)
	https://en.cppreference.com/w/c/language/operator_precedence
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 1, y = 2, z;

	// ���� ������(>, >=, <, <=)�� ���� ������(+, -)���� �켱������ ����
	printf("%d\n", x > y + 2); // ��� : 0 (false)
	printf("%d\n", x > (y + 2)); // ��� : 0 (false)

	// ���� ������(>, >=, <, <=)�� ���� ������(=)���� �켱������ ����.
	printf("%d\n", z = x > y);
	printf("%d\n", z = (x > y));

	// '==' �����ڿ� '!=' �������� �켱������ �����Ƿ� ���ʺ��� ������� ����
	printf("%d\n", x != y == z);
	printf("%d\n", (x != y) == z);

	return 0;
}