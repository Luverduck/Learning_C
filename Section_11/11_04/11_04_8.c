// 11.4 ���ڿ��� �Է¹޴� �پ��� �����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// ���� �����ڷ� scanf�� �Է� ���ڿ� ���� ����
	char str_1[5], str_2[7];

	int count = scanf("%4s %6s", str_1, str_2);
	//int count = scanf("%6s %6s", str_1, str_2); // run-time error

	printf("%s | %s\n", str_1, str_2);

	return 0;
}