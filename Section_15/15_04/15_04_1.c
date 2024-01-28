// 15.4 ��Ʈ���� �� ������ Ȯ���غ���

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>   // pow()
#include <string.h> // strlen()
#include <stdlib.h> // exit()

unsigned char to_decimal(const char bi[]);
void print_binary(const unsigned char num);

int main(void)
{
	unsigned char a = 6;
	unsigned char b = 5;

	printf("%hhu\n", a);
	print_binary(a);

	printf("%hhu\n", a);
	print_binary(a);

	// ��Ʈ NOT ������
	printf("%hhu\n", ~a);
	print_binary(~a);

	// ��Ʈ AND ������
	printf("%hhu\n", a & b);
	print_binary(a & b);

	// ��Ʈ OR ������
	printf("%hhu\n", a | b);
	print_binary(a | b);

	// ��Ʈ XOR ������
	printf("%hhu\n", a ^ b);
	print_binary(a ^ b);

	return 0;
}

// 2���� ���ڿ��� 10���� ���������� ��ȯ
unsigned char to_decimal(const char bi[])
{
	const size_t bits = strlen(bi);
	unsigned char sum = 0;

	for (size_t i = 0; i < bits; ++i)
	{
		if (bi[i] == '1')
			sum += (int)pow(2, bits - 1 - i);
		else if (bi[i] != '0')
		{
			printf("Wrong character : %c\n", bi[i]);
			exit(EXIT_FAILURE);
		}
	}

	return sum;
};

// ��Ʈ AND ������ &�� ����Ͽ� 10���� �������� 2���� ���·� ���
void print_binary(const unsigned char num)
{
	printf("Decimal %d\t== Binary ", num);

	const size_t bits = sizeof(num) * 8;

	for (size_t i = 0; i < bits; ++i)
	{
		const unsigned char mask = (unsigned char)pow(2, (bits - 1 - i));

		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	};

	printf("\n\n");
};