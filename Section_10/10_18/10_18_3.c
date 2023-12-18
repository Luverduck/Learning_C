// 10.18 ���� ���ͷ��� �迭
/*
	���� ���ͷ� (compound literal)
	�迭, ����ü, ����ü �ڷ����� �̸� ���� ��ü
	( type ) { initializer-list };
*/

#include <stdio.h>

#define ROWS 2
#define COLS 3

int sum_1d(int arr_1d[COLS], int cols);
int sum_2d(int arr_2d[][COLS], int rows);

int main(void)
{
	// �迭�� ���� ���ͷ� ���

	// 2. �Լ� ȣ��� �迭�� ���� ���ͷ��� �μ��� ����

	// �Լ� ȣ��� 1���� �迭�� �μ��� ����
	int arr_1d[COLS] = { 1, 2, 3 };
	// sum_1d(arr_1d, ROWS)
	printf("%d\n", sum_1d(arr_1d, COLS));

	// �Լ� ȣ��� 1���� �迭�� ���� ���ͷ��� �μ��� ����
	// sum_1d((int[COLS]) { 1, 2, 3 }, COLS)
	printf("%d\n", sum_1d((int[COLS]) { 1, 2, 3 }, COLS));

	// �Լ� ȣ��� 2���� �迭�� �μ��� ����
	int arr_2d[ROWS][COLS] = { { 1, 2, 3 }, { 4, 5, 6} };
	// sum_2d(arr_2d, ROWS);
	printf("%d\n", sum_2d(arr_2d, ROWS));

	// �Լ� ȣ��� 2���� �迭�� ���� ���ͷ��� �μ��� ����
	// sum_2d((int[ROWS][COLS]) { { 1, 2, 3 }, { 4, 5, 6 } }, ROWS);
	printf("%d\n", sum_2d((int[ROWS][COLS]) { { 1, 2, 3 }, { 4, 5, 6 } }, ROWS));

	return 0;
}

int sum_1d(int arr_1d[COLS], int cols)
{
	int sum = 0;

	for (int i = 0; i < cols; ++i) {
		sum += arr_1d[i];
	};

	return sum;
};

int sum_2d(int arr_2d[][COLS], int rows)
{
	int sum = 0;

	for (int j = 0; j < rows; ++j) {
		for (int i = 0; i < sizeof(arr_2d[0]) / sizeof(int); ++i) {
			sum += arr_2d[j][i];
		};
	};

	return sum;
};