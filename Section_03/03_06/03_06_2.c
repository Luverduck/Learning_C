// 3.6 ������ �����÷ο�
/*
	N���� ���ڸ� ǥ���ϴ� ���λ� (10������ ���λ� ���� �Է�)
	2���� : 0b
	8���� : 0
	16���� : 0x

	���ڸ� printf() �� �� N���� ���ڷ� ����ϵ��� �ϴ� ���� ������
	2���� : ����
	8���� : %o
	16���� : %x
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// N������ 10������ ��ȯ�� �� ���
	// 2����
	int int_binary = 0b11;
	printf("%d\n", int_binary); // 10���� ���� ������ %d�� ��� : 2 + 1 = 3

	// 8����
	int int_octal = 011;
	printf("%d\n", int_octal); // 10���� ���� ������ %d�� ��� : 8 + 1 = 9

	// 16����
	int int_hexadecimal = 0x11;
	printf("%d\n", int_hexadecimal); // 10���� ���� ������ %d�� ��� : 16 + 1 = 17

	// 10������ N������ ��ȯ�� �� ���
	int int_decimal = 18;
	printf("%d\n", int_decimal); // 10���� ���� ������ %d�� ��� : 18
	printf("%o\n", int_decimal); // 8���� ���� ������ %o�� ��� : (2 * 8) + (2 * 1) = 22
	printf("%x\n", int_decimal); // 16���� ���� ������ %x�� ��� : (1 * 16) + (2 * 1) = 12

	return 0;
}