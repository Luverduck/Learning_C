// 16.13 ǥ�� ���� ���̺귯��
/*
	math.h
	C ����� ǥ�� ���̺귯����, ���� ���� �Լ��� �����ϴ� ��� ����
	- ��κ��� �Լ����� �ε��Ҽ����� �ٷ��, ������ ������ ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	// ��Ÿ��� ���� ����
	
	// double�� ���
	double c = 5.0, b = 4.0, a;  // a = ?
	a = sqrt((c * c) - (b * b)); // a = sqrt(pow(c, 2) - pow(b, 2));
	printf("a  = %f\n", a);

	// float�� ���
	float cf = 5.0f, bf = 4.0f, af; // a = ?
	af = sqrtf((cf * cf) - (bf * bf)); // a = sqrt(pow(c, 2) - pow(b, 2));
	printf("af = %f\n", af);

	return 0;
}