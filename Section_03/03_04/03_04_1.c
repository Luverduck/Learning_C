// 3.4 ������ ����� ���α׷� �����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// ���� �ʱ�ȭ
	int i = 0, j = 0;

	// �Է°��� �޾� ���� i�� ����
	printf("Input two integers.\n"); // �ȳ��� ���
	scanf("%d%d", &i, &j); 
	// 1) �ݵ�� �ּҰ��� �μ��� �Ѱܾ� �Ѵ�.
	// 2) %d%d�� �� �� �ִ�.

	// ����
	int sum = i + j;

	// ���� i�� ����� �� ���
	printf("Value is %d %d\n", i, j);
	printf("%d plus %d = %d\n", i, j, sum);

	return 0;
}