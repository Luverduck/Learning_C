// 15.3 &�� �̿��Ͽ� ������ �� ������ ���� ����
/*
	��Ʈ ����ŷ (Bit Masking)
	��Ʈ AND �����ڴ� �����ϴ� �� ��Ʈ�� ��� 1�̸� 1�� ��ȯ�Ѵ�.
	��Ʈ AND ������ ��� ���¸� ������ �������� ��Ʈ ����ũ(Bit Mask)�� �Ѵ�.
	��Ʈ ����ũ�� 1�� ǥ���� ��Ʈ��, 0�� ���� ��Ʈ�� �ǹ��Ѵ�.
	�������� ��Ʈ ����ũ�� ��Ʈ AND ������ ��� ��Ʈ ����ũ ������ �������� ���� �� �ִ�.

	�������� ������ ��ȯ ����
	�������� ������ �ڸ����� �ش��ϴ� ��Ʈ ����ũ�� ��Ʈ AND ������ ��
	���� ����� �ش� ��Ʈ ����ũ�� ���� �� 1��, ���� ���� �� 0�� ����ϵ��� �Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>   // pow()
#include <string.h> // strlen()
#include <stdlib.h> // exit()

unsigned char to_decimal(const char bi[]);
void print_binary(const unsigned char num);

int main(void)
{
	// 2���� ���ڿ��� 10���� ���������� ����
	unsigned char i = to_decimal("01000110");
	unsigned char mask = to_decimal("00000101");

	// 10������ 2���� ���·� ���
	print_binary(i);
	print_binary(mask);
	print_binary(i & mask);

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
	
	printf("\n");
};