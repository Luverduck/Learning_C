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

// 1) ��ó���� #define 
#define PI 3.141592f
#define AI_NAME "Jarvis"
// - ����� �̸��� ���������� �빮�ڸ� ����Ѵ�.
// - ����� ���� �����Ͽ� ����� ���� ��� �κ��� �ڵ带 ���� ������ �� �ִ�.

int main(void)
{
	float radius, area, circumference;

	// printf �� ���� �ٲ� ���� ��ȣ�� ����� ����� �� �ִ�.
	printf("I'm %s.\n", AI_NAME);
	printf("Please, input radius\n");

	scanf("%f", &radius);

	area = PI * radius * radius; // area = pi * radius * radius
	circumference = 2.0f * PI * radius; // circumference = 2 * pi * radius

	printf("Area is %f\n", area);
	printf("Circumference is %f\n", circumference);

	return 0;
}