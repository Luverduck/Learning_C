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
	// �Ǽ��� -> �Ǽ��� : �����θ� �ʰ��ϴ� ��Ʈ�� �� ����(truncation)
	// �Ǽ��� ��ȯ���� ������ �Ͼ�� �׻� ���� �����ؾ� �ϴµ� �� �ϳ��� �����ϰ� �ϳ��� �����ϴ°�?

	double double_3_1 = 3.1415928;
	float float_3_1 = double_3_1;
	printf("\ndouble to float\n");
	printf("double value:\t%.7f\n", double_3_1);	// ��� : 3.1415928
	printf("float value:\t%.7f\n", float_3_1);		// ��� : 3.1415927
	
	
	double double_3_2 = 3.1415929;
	float float_3_2 = double_3_2;
	printf("double value:\t%.7f\n", double_3_2);	// ��� : 3.1415929
	printf("float value:\t%.7f\n", float_3_2);		// ��� : 3.1415930

	return 0;
}