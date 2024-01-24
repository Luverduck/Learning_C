// 14.20 이름 공간 공유하기
/*
	이름 공간 (Namespace)
	객체(Object)를 구분할 수 있는 범위
	하나의 이름 공간에서 하나의 이름은 단 하나의 객체(Object)만 가리킬 수 있다.
*/

// 이름 공간의 예시
// 3. typedef로 구조체의 자료형을 선언할 경우 해당 이름의 구조체 변수를 선언할 수 없다.

#include <stdio.h>
int main(void)
{
	// 구조체 struct rect의 자료형을 rect로 선언
	typedef struct rect rect;

	// 구조체 변수 선언시 rect를 사용할 수 없다.
	// rect rect = { 1.1, 1.2 }; // Error

	return 0;
}