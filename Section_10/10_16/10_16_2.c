// 10.16 다차원 배열을 함수에 전달하는 방법

#include <stdio.h>

// 기호적 상수 (symbolic constant)
#define ROWS 3
#define COLS 4

// 2차원 배열을 인수로 하는 경우 (1)
int sum_2d_1(int arr_2d[ROWS][COLS]);

int main(void)
{
	// 2차원 배열
	int arr_2d[ROWS][COLS] = {
								{ 1, 2, 3, 4 },
								{ 5, 6, 7, 8 },
								{ 9, 0, 1, 2 }
												};
	
	// 2차원 배열 모든 요소의 합
	printf("%d\n", sum_2d_1(arr_2d));

	return 0;
}

// 2차원 배열을 인수로 하는 경우 (1)
// 호출한 함수 내에서 arr_2d의 자료형은 int (*)[4]이므로 
// sizeof 연산자로 행 정보를 알아낼 수 없다.
int sum_2d_1(int arr_2d[ROWS][COLS])
{
	int sum = 0;
	for (int j = 0; j < ROWS; ++j) {
		for (int i = 0; i < COLS; ++i) {
			sum += arr_2d[j][i];
		};
	};

	return sum;
};