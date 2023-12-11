// 10.14 2차원 배열과 포인터

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 2차원 배열 선언
	int arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };

	// 메모리 주소 관계
	// arr == arr[0] == &arr[0] == &arr[0][0]
	printf("%p %p %p %p %p\n", arr, *arr, arr[0], &arr[0], &arr[0][0]);
	// arr[1] == &arr[1] == &arr[1][0]
	printf("%p %p %p\n", arr[1], &arr[1], &arr[1][0]);

	// (0, 0)번째 요소
	printf("%d %d\n", arr[0][0], **arr);

	// (j, i)번째 요소
	printf("%d %d\n", arr[1][2], *(*(arr + 1) + 2));

	return 0;
}