// 7.9 ���� ������
/*
	���� ������ (Conditinal Operator)
	X ? A : B
	X�� true�� �� A, false�� �� B�� ��ȯ
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	// ���� ������ ����
	int number;
	scanf("%d", &number);

	bool is_even;

	// TO DO : if ~ else���� ���� �ʰ� ������ ���� ������ �ϴ� ���α׷��� ����
	//if (number % 2 == 0)
	//	is_even = true;
	//else
	//	is_even = false;

	is_even = number % 2 == 0 ? true : false;

	if (is_even)
		printf("Even");
	else
		printf("Odd");

	return 0;
}