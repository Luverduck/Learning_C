// 6.17 for ������ �迭�� �Բ� ���
/*
	TO DO : 5���� ���ڸ� �Է¹��� �� �� �հ踦 ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5

int main(void)
{
	int my_arr[SIZE];
	int sum = 0;

	for (int i = 0; i < SIZE; ++i) {
		printf("Enter Number (count : %d) : ", i + 1);
		scanf("%d", &my_arr[i]);
		printf("\n");
	}

	for (int i = 0; i < SIZE; ++i) {
		sum += my_arr[i];
	}

	printf("Sum : %d", sum);

	return 0;
}