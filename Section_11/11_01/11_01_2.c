// 11.1 문자열을 정의하는 방법
/*
	문자열의 특징
	1. 기호적 상수(symbolic constant)로 선언할 수 있다.
	2. 문자열 리터럴의 역참조 시 문자열의 첫 번째 글자를 반환한다.
	3. 문자열을 문자의 배열로 초기화 할 경우 반드시 끝에 null 문자 \0을 포함시켜야 한다.
	4. 문자열의 길이는 반드시 정수가 되어야 한다.
	5. 문자열의 초기화하지 않은 요소는 null 문자로 초기화된다.
	6. 문자열을 가리키는 포인터를 선언할 수 있다.
	7. 문자열을 가리키는 포인터의 경우 배열 역참조 연산으로 값을 바꿀 수 없다. (문자열이 저장되는 메모리는 읽기 전용 메모리이기 때문)
	8. 문자열의 리터럴 사이에 띄어쓰기, 줄 바꿈을 무시한다.
*/

#include <stdio.h>

// 1. 기호적 상수(symbolic constant)로 선언할 수 있다.
#define Message "ABCDEF"

int main(void)
{
	// 2. 문자열 리터럴의 역참조 시 문자열의 첫 번째 글자를 반환한다.
	printf("%c", *"ABCDEF"); // 결과 : A

	// 3. 문자열을 문자의 배열로 초기화 할 경우 반드시 끝에 null 문자 \0을 포함시켜야 한다.
	char str[] = { 'A', 'B', 'C', 'D', 'E', 'F', '\0' };

	// 4. 문자열의 길이는 반드시 정수가 되어야 한다.
	// - 길이가 정수인 문자열
	char str_1[3];
	char str_2[3 * 4 + 2];
	// - 변수로 길이를 정할 수 있는 배열 (VLA)
	int n = 5;
	char str_3[n];
	// - 길이가 실수인 문자열은 허용하지 않는다.
	// char str_4[1.2];

	// 5. 문자열의 초기화하지 않은 요소는 null 문자로 초기화된다.
	char str_5[10] = "ABCDEF";

	// 6. 문자열을 가리키는 포인터를 선언할 수 있다.
	char* ptr = "ABCDEF"; // 문자열의 첫 번째 문자인 'A'가 저장된 주소를 저장

	// 7. 문자열을 가리키는 포인터의 경우 배열 역참조 연산으로 값을 바꿀 수 없다. (문자열이 저장되는 메모리는 읽기 전용 메모리이기 때문)
	// - 문자열
	char str_6[] = "ABCDEF";
	str_6[2] = 'c';
	// - 문자열을 가리키는 포인터
	char* ptr_str = str;
	// ptr[2] = 'c'; // 배열 역참조 연산으로 값을 바꿀 수 없다.

	// 8. 문자열의 리터럴 사이에 띄어쓰기, 줄 바꿈을 무시한다.
	char str_7[] = "ABC""DEF"   "GHI"
		"JKL";
	// 다음 문자열과 동일하게 동작한다.
	// char str_7[] = "ABCDEFGHIJKL";

	return 0;
}