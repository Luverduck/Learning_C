// 10.16 다차원 배열을 함수에 전달하는 방법

#include <stdio.h>

// 기호적 상수 (symbolic constant)
#define ROWS 3
#define COLS 4

// 2차원 배열을 인수로 하는 경우 (2)
int sum_2d_2(int arr_2d[][COLS], int rows);
// int sum_2d_2(int [][cols], int rows);
// int sum_2d_2(int (*arr_2d)[cols], int rows);

int main(void)
{
	// 2차원 배열
	int arr_2d[ROWS][COLS] = {
								{ 1, 2, 3, 4 },
								{ 5, 6, 7, 8 },
								{ 9, 0, 1, 2 }
												};

	// 2차원 배열 모든 요소의 합
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