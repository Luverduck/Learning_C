// 7.11 �ִ�, �ּ�, ��� ���ϱ� ����
/*
	TO DO : �Է��� ���� �� �ִ밪, �ּҰ��� �Է��� ��� ���� ���� ��հ��� ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, temp, count = 0;
	int max, min;
	double sum = 0;

	// ������ : ù �Է� �� max�� min�� ���ÿ� �ʱ�ȭ�� �� �ִ� ����� �ʿ��ϴ�.
	// �ذ�å : count�� 1�� �� ���� �����ؼ� �ʱ�ȭ�� �� continue�� ���� ������ �ǳʶڴ�.

	while (scanf("%d", &num) == 1) {
		
		count++;
		sum += num;

		// count�� 1�� �� (ù �Է��� ��)
		if (count == 1) {
			max = num, min = num;
			continue;
		}

		if (num > max) {
			max = num;
		}

		if (num < min) {
			min = num;
		}
	}

	printf("maximum : %d, minimum : %d, average : %lf\n", max, min, sum / count);

	return 0;
}