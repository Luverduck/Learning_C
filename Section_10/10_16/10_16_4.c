// 10.16 ������ �迭�� �Լ��� �����ϴ� ���

#include <stdio.h>

// ��ȣ�� ��� (symbolic constant)
#define ROWS 3
#define COLS 4

// 2���� �迭�� �ּҿ� ��, ���� ���� �μ��� �ϴ� ���
int sum_2d_3(int* arr_2d, int row, int col);
// int sum_2d_3(int*, int, int);

int main(void)
{
	// 2���� �迭
	int arr_2d[ROWS][COLS] = {
								{ 1, 2, 3, 4 },
								{ 5, 6, 7, 8 },
								{ 9, 0, 1, 2 }
												};

	// 2���� �迭 ��� ����� ��
	printf("%d\n", sum_2d_3(arr_2d, ROWS, COLS));

	return 0;
}

// 2���� �迭�� �ּҿ� ��, ���� ���� �μ��� �ϴ� ���
int sum_2d_3(int* arr_2d, int row, int col)
{
	int sum = 0;

	for (int j = 0; j < row; ++j) {
		for (int i = 0; i < col; ++i) {
			sum += *(arr_2d + i + col * j); // arr_2d[ i + col * j ]
		};
	};

	return sum;
};