// 10.4 포인터와 배열

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 길이 4인 int형 배열 선언
	int arr[4];
	int num = sizeof(arr) / sizeof(int);

	// 배열의 요소를 100, 200, 300, 400으로 초기화
	for (int i = 0; i < num; ++i) {
		arr[i] = (i + 1) * 100;
	};

	// 배열의 시작 주소 저장
	int* ptr = arr;

	printf("%d %d %d\n", *(ptr + 1), *(arr + 3), arr[3]);
	// 결과 : 200 400 400
	// *(ptr + 1) = *(&arr[0] + 1) = *(&arr[1]) = 200
	// *(arr + 3) = *(&arr[0] + 3) = *(&arr[3]) = 400
	// arr[3] = 400

	printf("%d %d %d\n", *ptr + 1, *arr + 3, arr[3]);
	// 결과 : 101 103 400
	// *ptr + 1 = *(&arr[0]) + 1 = 100 + 1 = 101
	// *ptr + 3 = *(&arr[0]) + 3 = 100 + 3 = 103
	// arr[3] = 400
}