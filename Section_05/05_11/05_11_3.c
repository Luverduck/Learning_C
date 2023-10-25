// 5.11 �ڷ��� ��ȯ
/*
	�ڷ��� ��ȯ ���� (Type Conversion Rank)
	�ڷ����� �ٸ� �ǿ����� ���� ���꿡�� ������ ���� �ǿ������� �ڷ������� ��ȯ��.
	- �Ǽ����� ����
		long double
		double
		float
	- �������� ����
		long long, unsigned long long
		long, unsigned long
		int, unsigned
		short, unsigned short
		char, unsigned char
		_Bool
*/

#include <stdio.h>
int main(void)
{
	double d = 1.23;
	float f = 2.46f;

	double d_result = d + f;
	float f_result = d + f; // warning C4244: 'initializing': conversion from 'double' to 'float', possible loss of data

	return 0;
}