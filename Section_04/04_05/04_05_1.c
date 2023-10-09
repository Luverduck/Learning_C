// 4.5 ��ȣ�� ����� ��ó���� #define
/*
	��ȣ�� ��� (Symbolic Constant)
	���� ����� �޸� ������ �̸�(������)�� ���� ���

	��ȣ�� ����� ����
	1) ��ó���� #define ���
	2) 'const' Ű���� ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1) ��ó���� #define ���
#define PI 3.141592f

int main(void)
{
	float radius, area, circumference;

	printf("Input radius\n");

	scanf("%f", &radius);

	// ���� ���� �Է��� ���
	//area = 3.141592f * radius * radius; // area = pi * radius * radius
	//circumference = 2.0f * 3.141592f * radius; // circumference = 2 * pi * radius

	// ��ȣ�� ��� PI�� ����� ���
	area = PI * radius * radius; // area = pi * radius * radius
	circumference = 2.0f * PI * radius; // circumference = 2 * pi * radius
	// �������� �� PI�� 3.141592f �� ��ü�ȴ�.

	printf("Area is %f\n", area);
	printf("Circumference is %f\n", circumference);

	return 0;
}