// 16.13 ǥ�� ���� ���̺귯��
/*
	math.h
	C ����� ǥ�� ���̺귯����, ���� ���� �Լ��� �����ϴ� ��� ����
	- ��κ��� �Լ����� �ε��Ҽ����� �ٷ��, ������ ������ ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tgmath.h>

int main(void)
{
	// ��Ÿ��� ���� ����
	double t1 = sqrt(2.0f);
	// float sqrtf( float x ) �Լ��� �����Ѵ�.
	double t2 = sqrt(2.0);
	// double sqrt( double x ) �Լ��� �����Ѵ�.

	if (t1 == t2)
		printf("Identical\n");
	else
		printf("Not identical\n");
	// ��� : Not identical

	return 0;
}