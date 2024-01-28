// 15.2 �������� �������� �ٲٱ� ��������

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>   // pow()
#include <string.h> // strlen()
#include <stdlib.h> // exit()

int to_decimal(const char*);

int main(void)
{
	printf("Binary (string) to Decimal conversion\n");

	printf("%d\n", to_decimal("00000110"));
	// 0000 0110 = 1*(2^2) + 1*(2^1) = 4 + 2 = 6

	printf("%d\n", to_decimal("00010110"));
	// 0001 0110 = 1*(2^4) + 1*(2^2) + 1*(2^1) = 16 + 4 + 2 = 22

	printf("%d\n", to_decimal("10010100"));

	return 0;
}

// 2���� ���ڿ��� 10���� ���������� ��ȯ
int to_decimal(const char* str)
{
	// ��ȯ �����
	int result = 0;

	// ������ ���ڿ��� ����
	int lenth = strlen(str);

	// ���ڿ� ��ȸ
	for (int i = 0; i < lenth; ++i)
	{
		if (*str == '1') // Ư�� �ڸ����� ���ڿ��� '1'�� ��쿡��
			result += (int)pow(2.0, lenth - i - 1);
		str++; // �ڸ��� �̵�
	}

	return result;
};