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
#include <limits.h>
#include <float.h>
int main(void)
{
	// �ڷ��� ������ �߻��� �� ������ �ս��� ���� �� �ִ�.
	// ������ -> ������ : ���� ��Ʈ �ս�
	int int_1 = SHRT_MAX + 1;
	short short_1 = int_1;
	printf("int to short\n");
	printf("int value:\t%d\n", int_1);			// ��� : 32768
	printf("short value:\t%d\n", short_1);		// ��� : -32768

	// �Ǽ��� -> ������ : �Ҽ��� ���� ����(truncation)
	double double_2 = 3.234;
	int int_2 = double_2;
	printf("\ndouble to int\n");
	printf("double value:\t%A\n", double_2);	// ��� : 3.234000
	printf("int value:\t%A\n", (float)int_2);	// ��� : 3.000000

	// �Ǽ��� -> �Ǽ��� : �Ҽ��� ���� �ݿø�(rounding)
	double double_3 = 3.14159;
	float float_3 = double_3;
	printf("\ndouble to float\n");
	printf("double value:\t%A\n", double_3);	// ��� : 0X1.921F9F01B866EP+1
	printf("float value:\t%A\n", float_3);		// ��� : 0X1.921FA00000000P+1
	
	// �Ǽ��� ���� ����� ��ȯ�� �ڷ����� ������ ��Ʈ�� ��� ǥ���� �� �ִٸ� ������ �߻����� �ʴ´�.
	double double_4 = 1.25;
	float float_4 = double_4;
	printf("\ndouble to float (special case)\n");
	printf("double value:\t%A\n", double_4);	// ��� : 0X1.4000000000000P+0
	printf("float value:\t%A\n", float_4);		// ��� : 0X1.4000000000000P+0

	return 0;
}