// 7.6 �Ҽ� �Ǵ� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	unsigned num;
	int isPrime = 0; // �Ҽ����� ����

	printf("Enter number : ");
	scanf("%d", &num);

	/*
		TO DO : Check if num is a prime number
		EX) num is 4, try num % 2, num % 3
		EX) num is 5, try num % 2, num % 3, num % 4

		TO DO : ��� ��� ���
	*/

	unsigned div;

	// �ʱⰪ�� true�� ����
	isPrime = true;

	for (div = 2; (div * div) <= num; ++div) // * �����佺�׳׽��� ü�� �̿��� ���� Ƚ�� ���̱�
	{
		if (num % div == 0) 
		{
			isPrime = false;

			// div�� num�� �������� ���� �������� �ƴ� ���� �и�
			if (num == div * div)
			{
				printf("%u is divisible by %u\n", num, div);
			}
			else
			{
				printf("%u is divisible by %u and %u\n", num, div, num/div);
			}
		}
	}

	if (isPrime) 
	{
		printf("%u is a prime number.\n", num);
	}
	else 
	{
		printf("%u is not a prime number.\n", num);
	}

	return 0;
}