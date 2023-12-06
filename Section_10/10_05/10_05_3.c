// 10.5 2차원 배열과 메모리
/*
	2차원 배열과 메모리
	2차원 배열은 1차원 배열 여러 개가 연속적으로 연결된 구조이다.
*/

#include <stdio.h>
int main(void)
{
	int arr[2][3] = { {0, 1, 2}, {3, 4, 5} };

	// 2차원 배열의 모든 요소 출력
	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); ++j) {
		for (int i = 0; i < sizeof(arr[0]) / sizeof(int); ++i) {
			printf("arr[%d][%d] = %d, &arr[%d][%d] = %p\n", j, i, arr[j][i], j, i, &arr[j][i]);
		};
	};

	return 0;
}