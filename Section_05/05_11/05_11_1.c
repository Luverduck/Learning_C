// 5.11 �ڷ��� ��ȯ
/*
	�ڷ��� ��ȯ (Type Conversion)
	������ �ڷ����� �ٸ� �ڷ������� ��ȯ�ϴ� ��

	�ڷ����� �°� (promotion)
	ũ�Ⱑ ���� �ڷ����� ũ�Ⱑ ū �ڷ������� ��ȯ�ϴ� ��
	
	�ڷ����� ���� (demotion)
	ũ�Ⱑ ū �ڷ����� ũ�Ⱑ ���� �ڷ������� ��ȯ�ϴ� ��
*/

#include <stdio.h>
int main(void)
{
	// �ڷ��� �°�(promotion)
	short s = 100;
	int i = s;

	// �ڷ��� ����(demotion)
	double d = 1.123;
	float f = d; // warning C4244: 'initializing': conversion from 'double' to 'float', possible loss of data

	return 0;
}