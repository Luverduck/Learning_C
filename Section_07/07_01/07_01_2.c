// 7.1 �б⹮ if
/*
	if ~ else ��
	if ( [expression] ) {
		[statement1]
	} else {
		[statement2]
	};
*/

// TO DO : �Է¹��� ����� ¦���̸� "Even", Ȧ���̸� "Odd"�� ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int number;

	printf("Input a positive integer : ");
	scanf("%d", &number);

	if (number % 2 == 0) { // ¦���� ���� ó��
		printf("Even");
	}
	else { // ¦���� �ƴ� ��(Ȧ��)�� ó��
		printf("Odd");
	}

	return 0;
}