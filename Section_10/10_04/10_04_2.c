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

	// 2. 포인터의 덧셈/뺄셈과 배열 요소 역참조
	// 배열 포인터의 인덱스 연산시 배열의 특정 인덱스 요소의 값에 역참조 연산 없이 접근할 수 있다.
	// ptr[n] = *(ptr + n) = *(&ptr[0] + n)    

	printf("%p %d\n", &ptr[0], ptr[0]); // 결과 : 000000FE458FF6A5 100
	printf("%p %d\n", &ptr[1], ptr[1]); // 결과 : 000000FE458FF6A9 200
	printf("%p %d\n", &ptr[2], ptr[2]); // 결과 : 000000FE458FF6AD 300
	printf("%p %d\n", &ptr[3], ptr[3]); // 결과 : 000000FE458FF6B1 400

	return 0;
}