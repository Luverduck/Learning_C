// 15.11 ��Ʈ �ʵ��� �е�

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h> // memset()

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
	// ��� ��Ʈ�� ũ�� : 11[bit]
	// ��� �� ���� ū �ڷ����� ũ�� : 16[bit] = 2[byte] (short)
	// ��Ʈ �ʵ��� ũ�� : 32[bit] = 4[byte]
	struct
	{
		unsigned char option1 : 3;
		unsigned char option2 : 2;
		unsigned short option3 : 6;
	} bbf;

	// ��Ʈ �ʵ��� ũ��
	printf("%zu bytes\n", sizeof(bbf));

	// ��Ʈ �ʵ��� ��� ��Ʈ�� 1�� �ʱ�ȭ
	memset((char*)&bbf, 0xff, sizeof(bbf));
	print_binary((char*)&bbf, sizeof(bbf));

	// ù ��° ����� ��� ��Ʈ ������ 0���� ����
	bbf.option1 = 0;
	print_binary((char*)&bbf, sizeof(bbf));

	// �� ��° ����� ��� ��Ʈ ������ 0���� ����
	bbf.option2 = 0;
	print_binary((char*)&bbf, sizeof(bbf));

	// �� ��° ����� ��� ��Ʈ ������ 0���� ����
	bbf.option3 = 0;
	print_binary((char*)&bbf, sizeof(bbf));

	return 0;
}