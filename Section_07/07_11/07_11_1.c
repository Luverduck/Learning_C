// 7.11 �ִ�, �ּ�, ��� ���ϱ� ����
/*
	TO DO : �Է��� ���� �� �ִ밪, �ּҰ��� �Է��� ��� ���� ���� ��հ��� ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>
int main(void)
{

	// ������ : ù �Է� �� max�� min�� ���ÿ� �ʱ�ȭ�� �� �ִ� ����� �ʿ��ϴ�.
	float max = -FLT_MAX; // max�� ���� float�� ���� �� �ִ� �ּҰ����� �ʱ�ȭ
	float min = FLT_MAX; // min�� ���� float�� ���� �� �ִ� �ִ밪���� �ʱ�ȭ

	float sum = 0.0f;
	float input;

	int n = 0;

	while (scanf("%f", &input) == 1) {
		// �ʱ�ȭ�� max�� ����� ���� input���� �����Ƿ� input�� ���� max�� ����ȴ�.
		max = (input > max) ? input : max;
		// �ʱ�ȭ�� min�� ����� ���� input���� ũ�Ƿ� input�� ���� min���� ����ȴ�.
		min = (input < min) ? input : min;
		// �Է°��� ��
		sum += input;
		// �Է¹��� �� 
		n++;
	}

	printf("min = %lf, max = %lf, avg = %lf\n", min, max, sum / n);

	return 0;
}