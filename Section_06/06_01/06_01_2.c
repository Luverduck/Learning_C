// 6.1 while �ݺ� �������� scanf()�� ��ȯ�� ����ϱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// TO DO : q�� �Էµ� �������� �Է¹��� ��� ���� �� ���

	// 1. �غ�
	int input = 0;	// �Է��� ������ ����
	int sum = 0;	// �հ踦 ������ ����

	// 2. �Է�
	printf("Enter an integer (q to quit) : ");

	// 3. �ݺ�
	while (scanf("%d", &input) == 1) { // scanf()�� ��ȯ���� while �ݺ� ������ ���ǹ��� ���Խ��� �ߺ� �ڵ� ����
		// ���� ������ ���� ó��
		sum = sum + input;
		// ���� ����
		printf("Enter next integer (q to quit) : ");
	}

	// 4. ���
	printf("SUM = %d\n", sum);
};