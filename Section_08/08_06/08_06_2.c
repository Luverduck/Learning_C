// 8.6 �Է� Ȯ���ϱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �Լ� ���� (prototype)
long get_long();

int main()
{
	// TO DO : �Լ� ����
	long number = get_long();

	return 0;
}

// �Լ� ���� (definition)
long get_long()
{
	printf("Please input an integer and press enter\n");

	long input;
	char c;

	while (scanf("%ld", &input) != 1) {
		printf("Your input - ");

		while ((c = getchar()) != '\n') {
			putchar(c);
		}

		printf(" - is not an integer. Please try again.\n");
	}

	printf("Your input %ld is an integer. Thank you.\n", input);

	return input;
};