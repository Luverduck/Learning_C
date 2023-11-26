// 9.9 ������ ��ȯ ����
/*
	�������� �������� ��ȯ
	������ 10�� ���Ͽ�
	10 / 2 = 5, remainder = 0
	5 / 2 = 2, remainder = 1
	2 / 2 = 1, remainder = 0
	1 / 2 = 0, remainder = 1
	������ 10�� �������� ��ȯ�� ����� 1010
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �ݺ������� ������ ������ ��ȯ
void print_binary_loop(unsigned long num);

// ��� ȣ��� ������ ������ ��ȯ
void print_binary_recursive(unsigned long num);

int main(void)
{
	unsigned long num = 10;

	//print_binary_loop(num);

	print_binary_recursive(num);

	return 0;
}

// �ݺ������� ������ ������ ��ȯ (������ : �� �ڸ��� ���ڰ� �������� ��µȴ�)
void print_binary_loop(unsigned long num)
{
	while (1) 
	{
		int quotient = num / 2;
		int remainder = num % 2;

		printf("%d", remainder); // remainder is 0 or 1
		
		num = quotient;

		if (quotient == 0) {
			break;
		}
	}
};

// ��� ȣ��� ������ ������ ��ȯ
void print_binary_recursive(unsigned long num)
{
	int remainder = num % 2;

	if (num >= 2) {
		print_binary_recursive(num / 2);
	}

	printf("%d", remainder);
};