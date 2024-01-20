// 14.7 ����ü�� �Լ��� �����ϴ� ���
/*
	����ü ���� ��ü�� �����ϴ� ���
	- ������ ����ü ������ ����� �Լ� �� ����ü ������ ����� ����

	����ü ������ �ּҸ� �����ϴ� ���
	- ������ �ּҷ� �ش� ����ü ������ ����
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#define FUNDLEN 50

// ����ü ����
struct Fortune {
	char bank_name[FUNDLEN];
	double bank_saving;
	char fund_name[FUNDLEN];
	double fund_invest;
};

// bank_saving�� fund_invest�� ���� ��ȯ
double sum(struct Fortune* my_fortune_in_func)
{
	return my_fortune_in_func->bank_saving + my_fortune_in_func->fund_invest;
};

int main(void)
{
	// ����ü ���� ����
	struct Fortune my_fortune = {
		"Well-Fargo",
		123.45,
		"JPMorgan Chase",
		6789.7
	};

	// ����ü ������ �ּҸ� �����ϴ� ���
	double ret_val = sum(&my_fortune);

	// ��� ���
	printf("Total : %f\n", ret_val);

	return 0;
}