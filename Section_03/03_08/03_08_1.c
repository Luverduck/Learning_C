// 3.8 8������ 16����
/*
	N���� ���ͷ� ��� ǥ���
	- 2���� : ���� �տ� ���λ� '0b' �߰�
	- 8���� : ���� �տ� ���λ� '0' �߰�
	- 16���� : ���� �տ� ���λ� '0x'�߰�
*/
#include <stdio.h>
int main(void)
{
	// N���� ���ͷ� ��� ǥ���
	// 10����
	unsigned int decimal = 4294967295;
	printf("%u\n", decimal);

	// 2���� : binary literal�� ���� �Է��� �� ���λ�� '0b'�� ���δ�.
	unsigned int binary = 0b11111111111111111111111111111111;
	printf("%u\n", binary);

	// 8���� : octal literal�� ���� �Է��� �� ���λ�� '0'�� ���δ�.
	unsigned int octal = 037777777777;
	printf("%u\n", octal);

	// 16���� : hexadecimal literal�� ���� �Է��� �� ���λ�� '0x' �Ǵ� '0X'�� ���δ�.
	unsigned int hexadecimal_lower = 0xffffffff;
	printf("%u\n", hexadecimal_lower);
	unsigned int hexadecimal_capital = 0XFFFFFFFF;
	printf("%u\n", hexadecimal_capital);

	return 0;
}