// 15.11 ��Ʈ �ʵ��� �е�

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void char_to_binary(unsigned char uc)
{
	const int bits = CHAR_BIT * sizeof(unsigned char);
	for (int i = bits - 1; i >= 0; i--)
		printf("%d", (uc >> i) & 1);
};

void print_binary(char* data, int bytes)
{
	for (int i = 0; i < bytes; ++i)
		char_to_binary(data[bytes - 1 - i]);
	printf("\n");
};

int main(void)
{
	// ��Ʈ �ʵ��� ���� �е� ����

	// ���� �е� ��Ʈ ������ 0�� ��
	struct
	{
		bool option1 : 8;
		bool : 0;
		bool option2 : 8;
	} bf_zero;
	printf("%zu bytes\n", sizeof(bf_zero));

	// ���� �е� ��Ʈ ������ 0�� �ƴ� ��
	struct
	{
		bool option1 : 8;
		bool : 1;
		bool option2 : 8;
	} bf_non_zero;
	printf("%zu bytes\n", sizeof(bf_non_zero));

	return 0;
}