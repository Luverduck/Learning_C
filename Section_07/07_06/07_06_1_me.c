// 7.6 �Ҽ� �Ǵ� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	unsigned num;
	int isPrime = 0; // �Ҽ����� ����

	printf("Enter number : ");
	scanf("%u", &num);

	/*
		TO DO : Check if num is a prime number
		EX) num is 4, try num % 2, num % 3
		EX) num is 5, try num % 2, num % 3, num % 4
	*/

	// �ǻ� �ڵ� �ۼ�
	// �Է��� �� X�� 1, 2, 3, ... X���� ���� �� �������� 0�� ��찡 �� 1���� ���(count = 1)�� �Ҽ��� ����

	if (num == 2 || num == 3) 
	{
		isPrime = 1;
	}
	else {
		int count = 0;
		for (int i = 2; i <= num; i++) 
		{
			if (num % i == 0) 
			{
				count += 1;
			}
		}
		if (count == 1)
			isPrime = 1;
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