// 3.4 ������ ����� ���α׷� �����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// ���� �ʱ�ȭ
	int won = 0;
	int dollar = 0;

	// �Է�
	printf("Input Won.\n");
	scanf("%d", &won);

	dollar = won * 0.00089;

	// ����
	printf("Dollar = %d\n", dollar); 
	// ������� int �ڷ����� ����ǹǷ� �Ҽ����� ���ŵǾ� 0���� ǥ�õȴ�.

	return 0;
}