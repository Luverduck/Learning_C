// 9.3 �Լ��� �ڷ����� ��ȯ��
/*
	�Լ��� �ڷ���
	�Լ� ���� �� ��ȯ�ϴ� ����� �ڷ����� �Լ��� �ڷ����̶� �Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �Լ� ���� ����� ��ȯ���� int�� ��� �����Ϸ��� ��ȯ���� int�� ����(assuming)�Ͽ� ó���Ѵ�.
// ��, ��ȯ���� int�� �ƴ� ��� �ݵ�� �ڷ����� ����ؾ� �Ѵ�.
int_min(int, int);

int main(void)
{
	int_min(1, 2);

	int i1, i2;

	while (1)
	{
		printf("Input two integer : ");
		
		if (scanf("%d %d", &i1, &i2) != 2) break;
		
		int lesser = int_min(i1, i2);
		
		printf("The lesser of %d and %d is %d\n", i1, i2, lesser);
	}

	return 0;
};

int_min(int i, int j) 
{
	int min;

	if (i < j)
		min = i;
	else
		min = j;

	return min;

	printf("Who am I?\n"); // return���� ���� ��ȯ�ϸ� ������ �����ϹǷ� return �Ʒ� �ڵ�� ������� �ʴ´�.
};