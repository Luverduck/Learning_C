// 7.9 ���� ������
/*
	���� ������ (Conditinal Operator)
	X ? A : B
	X�� true�� �� A, false�� �� B�� ��ȯ
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	// ���� ������ ����
	// ���� �����ڷ� �ִ밪 ���ϱ�
	int a = 1, b = 2;
	int max = (a > b) ? a : b;

	return 0;
}