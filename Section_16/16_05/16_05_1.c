// 16.5 ���� �μ� ��ũ��
/*
	���� �μ� ��ũ�� (Vari	adic Argument Macro)
	��ũ�� �μ��� ������ ���������� ������ �� �ִ� ��ũ��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // sqrt()

#define PRINT(X, ...) printf("Message " #X ": " __VA_ARGS__);
// ...(ellipses)	: ���� ��ũ�� �μ�
// __VA_ARGS__		: ���� ��ũ�� �μ��� ����ϱ� ���� �̸� ���ǵ� ��ũ��

int main(void)
{
	double x = 48;
	double y;

	y = sqrt(x);

	PRINT(1, "x = %g\n", x);
	// ��ũ�� �μ�
	// X	: 1
	// ...	: "x = %g\n", x (2��)
	// ��ũ�� Ȯ�� ���
	// printf("Message 1: %g\n", x);

	PRINT(2, "x = %.2f, y = %.4f\n", x, y);
	// ��ũ�� �μ�
	// X	: 2
	// ...	: "x = %.2f, y = %.4f\n", x, y (3��)
	// ��ũ�� Ȯ�� ���
	// printf("Message 2: x = %.2f, y = %.4f\n", x, y);

	return 0;
}