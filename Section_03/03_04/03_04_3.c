// 3.4 ������ ����� ���α׷� �����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// ���� �ʱ�ȭ
	// int won = 0;
	float won = 0.0f;
	// int dollar = 0;
	float dollar = 0.0f;

	// �Է�
	printf("Input Won.\n");
	scanf("%f", &won);

	// �Ǽ��� �⺻������ double �ڷ������� ǥ���ȴ�.
	//dollar = won * 0.00089; // won�� float �ڷ����� �ݸ� 0.00089�� double�̹Ƿ� ������ �� ���� �߻�
	dollar = won * 0.00089f; // 0.00089�� float�� ���ͷ��� ��ȯ

	// ����
	printf("Dollar = %f\n", dollar);

	return 0;
}