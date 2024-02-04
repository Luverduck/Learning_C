// 16.13 ǥ�� ���� ���̺귯��
/*
	math.h
	C ����� ǥ�� ���̺귯����, ���� ���� �Լ��� �����ϴ� ��� ����
	- ��κ��� �Լ����� �ε��Ҽ����� �ٷ��, ������ ������ ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// ��ũ�� �μ� X�� �ڷ����� ���� �ٸ� �Լ��� ����ǵ��� ��ũ�� ����
#define SQRT(X) _Generic((X), long double : sqrtl, default : sqrt, float : sqrtf)(X)

int main(void)
{
	// ��Ÿ��� ���� ����
	// �μ��� �ڷ����� ���� ���� �ٸ� �Լ��� �����ϵ��� ���� ( _Generic ��� )
	double t1 = SQRT(2.0f);  // float�� ���е��� ���� ��
	double t2 = SQRT(2.0);   // double�� ���е��� ���� ��

	// t1�� t2�� �μ��� ���е��� ���� �ٸ��Ƿ� ��� ����� �ٸ���.
	if (t1 == t2)
		printf("Identical\n");
	else
		printf("Not identical\n");

	return 0;
}