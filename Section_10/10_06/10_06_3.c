// 10.6 2���� �迭 ��������

#define _CRT_SECURE_NO_WARNINGS

#define MONTHS 12
#define YEARS 3

#include <stdio.h>

int main(void)
{
	// ��� ���
	double year2021[MONTHS] = { -2.4, 2.7, 9.0, 14.2, 17.1, 22.8, 28.1, 25.9, 22.6, 15.6, 8.2, 0.6 };
	double year2022[MONTHS] = { -2.2, -1.1, 7.7, 14.8, 19.1, 23.3, 27.3, 25.7, 22.4, 14.6, 10.0, -2.8 };
	double year2023[MONTHS] = { -1.5, 2.3, 9.8, 13.8, 19.5, 23.4, 26.7, 27.2, 23.7, 15.8, 6.8, 3.1 };

	// 3. ������ 2���� �迭�� �̿��Ͽ� 3�� ������ ���� ��� ��� ���
	double temperature[YEARS][MONTHS] =
	{
		{ -2.4, 2.7, 9.0, 14.2, 17.1, 22.8, 28.1, 25.9, 22.6, 15.6, 8.2, 0.6 },
		{ -2.2, -1.1, 7.7, 14.8, 19.1, 23.3, 27.3, 25.7, 22.4, 14.6, 10.0, -2.8 },
		{ -1.5, 2.3, 9.8, 13.8, 19.5, 23.4, 26.7, 27.2, 23.7, 15.8, 6.8, 3.1 }
	};

	printf("[Monthly average temperatures for 3 years]\n");
	printf("Year index :\t");
	for (int i = 1; i <= MONTHS; ++i) {
		printf("%d\t", i);
		if (i == MONTHS) {
			printf("\n");
		}
	}

	printf("Avg temps :\t");
	for (int i = 0; i < MONTHS; ++i) {
		double sum_monthly = 0.0;
		for (int j = 0; j < YEARS; ++j) {
			sum_monthly += temperature[j][i];
		};
		printf("%.1f\t", sum_monthly / YEARS);
	};

	printf("\n");

	return 0;
}