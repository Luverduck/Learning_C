// 7.7 �� ������ Logical Operator
/*
	�� �������� �켱����
	! > && > ||
	(AND �����ڰ� OR �����ں��� �켱������ ����)
	Reference : https://en.cppreference.com/w/c/language/operator_precedence
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h> // bool

int main(void)
{
	// �� �������� �켱���� ����
	int a = 1, b = 2, c = 3, d = 4;

	// ���� ����
	a > b && b > c || b < d;
	// ( a > b && b > c ) || ( b < d )
	// 1) ( a > b && b > c )
	//   - �� ������ '>'�� �� ������ '&&'���� ������ �켱������ ���� 
	//   - (a > b)�� (b > c) ���� ���� �� (a > b) && (b > c) ���� => ��� : 0
	// 2) ( b < d )
	//   - (b < d) ���� => ��� : 1
	// 3) ( a > b && b > c ) || ( b < d )
	//   - ( a > b && b > c )�� ��� 0�� ( b < d )�� ��� 1�� OR ���� => ��� : 1

	bool result = a > b && b > c || b < d;
	printf("%d", result);

	return 0;
}