// 6.2 �ǻ� �ڵ�
/*
	�ǻ� �ڵ� (Pseudo Code, ���� �ڵ�)
	�ڿ�� �̿��� ���� ������ ���α׷��� ���� ������ �������� ��ġ�� �ڵ�
	* �ڿ��� : ���α׷��� �� �ƴ� ��� ��� (�ѱ���, ���� ��)
	
	�ǻ� �ڵ� �ۼ��� ����
	Ư�� ����� �������� ��Ҹ� ������� �����Ƿ� ���� ���� �������� ������ �� �ִ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input = 0;
	int sum = 0;	// sum�� 0���� �ʱ�ȭ�Ѵ�.
	int status = 0;

	printf("Enter an integer (q to quit) : "); // ����ڿ��� �ȳ��Ѵ�.
	status = scanf("%d", &input); // ����ڿ��� �Է��� �޴´�.

	while (status == 1) { // �Է��� ������ ���ȿ���
		sum = sum + input; // �� �Է��� sum�� ���Ѵ�.

		printf("Enter next integer (q to quit) : "); // ����ڿ��� �ȳ��Ѵ�.
		status = scanf("%d", &input); // ����ڿ��� ���� �Է��� �޴´�.
	}

	printf("SUM = %d\n", sum); // sum�� ����Ѵ�.
	return 0;
}