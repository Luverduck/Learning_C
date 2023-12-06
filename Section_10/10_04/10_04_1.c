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

	// ptr = arr = &arr[0]
	printf("%p %p %p\n", ptr, arr, &arr[0]);

	ptr += 2;

	// ptr + 2 = arr + 2 = &arr[2]
	printf("%p %p %p\n", ptr, arr + 2, &arr[2]);

	return 0;
}