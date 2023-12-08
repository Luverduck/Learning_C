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

	// 배열 포인터
	// - 배열의 메모리 시작 주소를 가리키는 포인터
	int* ptr = arr;

	// 1. 포인터의 덧셈/뺄셈과 배열의 인덱스
	// 배열 포인터와 정수 덧셈/뺄셈 시 포인터가 가리키는 자료형 크기의 정수배만큼 주소가 변화한다.
	// ptr = arr = &arr[0];
	// ptr + n = arr + n = &arr[0] + n; = &arr[n];

	printf("%p %p %p\n", ptr, arr, &arr[0]);
	// 결과 : 000000FE458FF6A5 000000FE458FF6A5 000000FE458FF6A5

	printf("%p %p %p\n", ptr + 2, arr + 2, &arr[2]);
	// 결과 : 000000FE458FF6AD 000000FE458FF6AD 000000FE458FF6AD

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

	// ** 배열 포인터의 대입 연산
	ptr += 2;     // 배열 포인터는 대입 연산을 할 수 있다.
	//arr += 2;   // 배열 포인터가 가리키는 배열 변수는 대입 연산을 할 수 없다.

	return 0;
}