// 6.1 while �ݺ� �������� scanf()�� ��ȯ�� ����ϱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// TO DO : q�� �Էµ� �������� �Է¹��� ��� ���� �� ���

	// 1. �غ�
	int input = 0;	// �Է��� ������ ����
	int sum = 0;	// �հ踦 ������ ����
	int status = 0;	// scanf�� ��ȯ���� ������ ����

	// 2. �Է�
	printf("Enter an integer (q to quit) : ");
	status = scanf("%d", &input);

	// 3. �ݺ�
	while (status == 1) { // scanf()�� ��ȯ���� 1�� ���� �ݺ�
		// ���� ������ ���� ó��
		sum = sum + input;
		// ���� ����
		printf("Enter next integer (q to quit) : ");
		status = scanf("%d", &input);
	}

	// 4. ���
	printf("SUM = %d\n", sum);
};