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
	*/

	unsigned div;

	// �ʱⰪ�� true�� ����
	isPrime = true;

	for (div = 2; div < num; ++div) 
	{
		if (num % div == 0) // ���������� ��찡 �߰ߵ� �� (1�� �ڱ� �ڽ� �� ����� ���� ���)
		{ 
			isPrime = false; // false�� ����
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