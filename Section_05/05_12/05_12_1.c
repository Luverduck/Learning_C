// 5.12 �Լ��� �Ű������� �μ�
/*
	�Ű�����(Parameter)
	�Լ��� ������ �� ����ϴ� ����(variable)

	�μ�(Argument)
	�Լ��� ȣ���ϱ� ���� �ʿ��� ��(value)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void draw(int n); // ������Ÿ�� �Լ� ���� (ANSI function prototype declaration)

int main(void)
{
	int i = 5;
	char c = '#';
	float f = 7.1f;

	// �Լ��� ȣ���ϱ� ���� �ʿ��� ��(value)
	draw(i);
	draw((int)c);
	draw((int)f);

	return 0;
}

void draw(int n) // �Լ��� ������ �� ����ϴ� ����(variable)
{
	while (n-- > 0)
		printf("*");
	printf("\n");
};