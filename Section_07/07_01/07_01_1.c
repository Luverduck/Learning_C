// 7.1 �б⹮ if
/*
	if��
	if ( [expression] ) {
		[statement]
	}
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

	if (number % 2 != 0) { // Ȧ���� ���� ó��
		printf("Odd");
	}

	return 0;
}