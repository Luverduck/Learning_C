// 10.16 ������ �迭�� �Լ��� �����ϴ� ���

#include <stdio.h>

// ��ȣ�� ��� (symbolic constant)
#define ROWS 3
#define COLS 4

// 2���� �迭�� �μ��� �ϴ� ��� (2)
int sum_2d_2(int arr_2d[][COLS], int rows);
// int sum_2d_2(int [][cols], int rows);
// int sum_2d_2(int (*arr_2d)[cols], int rows);

int main(void)
{
	// 2���� �迭
	int arr_2d[ROWS][COLS] = {
								{ 1, 2, 3, 4 },
								{ 5, 6, 7, 8 },
								{ 9, 0, 1, 2 }
												};

	// 2���� �迭 ��� ����� ��
	printf("%d\n", sum_2d_2(arr_2d, ROWS));

	return 0;
}

int sum_2d_2(int arr_2d[][COLS], int rows)
{
	int sum = 0;
	for (int j = 0; j < rows; ++j) {
		for (int i = 0; i < sizeof(arr_2d[0]) / sizeof(int); ++i) {
			sum += arr_2d[j][i];
		};
	};

	return sum;
};