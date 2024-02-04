// 16.14 ǥ�� ��ƿ��Ƽ ���̺귯��
/*
	stdlib.h
	C ����� ǥ�� ���̺귯����, ���ڿ� ��ȯ, ���� �޸� ���� ���� �Լ��� �����ϴ� ��� ����
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void print_goodbye()
{
	printf("Goodbye.\n");
}

void print_thankyou()
{
	printf("Thank You.\n");
}

int main(void)
{
	printf("Purchase?\n");
	if (getchar() == 'y')     // 'y'�� �Է��� ��쿡��
		atexit(print_thankyou); // ���α׷��� ����� �� print_thankyou() �Լ� ����

	// �Է� ���� ����
	while (getchar() != '\n') {};

	printf("Goodbye message?\n");
	if (getchar() == 'y')    // 'y'�� �Է��� ��쿡��
		atexit(print_goodbye); // ���α׷��� ����� �� print_goodbye() �Լ� ����

	return 0;
}