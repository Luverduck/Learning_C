// 15.11 ��Ʈ �ʵ��� �е�

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
	// ��� ��Ʈ�� ũ�� : 5[bit]
	// ��� �� ���� ū �ڷ����� ũ�� : 8[bit] = 1[byte] (bool)
	// ��Ʈ �ʵ��� ũ�� : 8[bit] = 1[byte]
	struct 
	{
		bool option1 : 4;
		bool option2 : 1;
	} bbf;
	printf("%zu bytes\n", sizeof(bbf));

	// ��� ��Ʈ�� ũ�� : 16[bit]
	// ��� �� ���� ū �ڷ����� ũ�� : 16[bit] = 2[byte] (short)
	// ��Ʈ �ʵ��� ũ�� : 2[byte]
	struct
	{
		unsigned short option1 : 8;
		unsigned short option2 : 7;
		unsigned short option3 : 1;
	} usbf;
	printf("%zu bytes\n", sizeof(usbf));

	// ��� ��Ʈ�� ũ�� : 10[bit]
	// ��� �� ���� ū �ڷ����� ũ�� : 64[bit] = 8[byte] (unsigned long long)
	// ��Ʈ �ʵ��� ũ�� : 16[byte]
	struct
	{
		unsigned char a : 1;
		unsigned int b : 2;
		unsigned long long c : 7;
	} bf;
	printf("%zu bytes\n", sizeof(bf));

	return 0;
}