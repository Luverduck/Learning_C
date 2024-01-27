// 14.24 복잡한 선언을 해석하는 요령
/*
	해석 요소
	*  : 포인터
	() : 함수
	[] : 배열

	복잡한 선언의 해석 (Deciphering Complex Declarations - K.N.K 18.4)
	1) 괄호 안에서 바깥 방향으로 읽는다.
	2) (), []의 우선순위가 * 보다 높다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int(*f(int))[]; 
	// 함수 실행의 결과로 '배열'을 반환할 수 없다. 단, '배열의 포인터'를 반환할 수 있다.
	// 식별자 f는 int형 매개변수를 갖는 함수이다.
	// 함수 실행의 결과로 '배열의 포인터'를 반환한다.

	int(*g(int))(int); 
	// 함수 실행의 결과로 '다른 함수'를 반환할 수 없다. 단, '함수 포인터'를 반환할 수 있다.
	// 식별자 g는 int형 매개변수를 갖는 함수이다. 
	// 함수 실행의 결과로 int형 매개변수를 가지며 int를 반환하는 '함수 포인터'를 반환한다.

	int(*x[10])(int);
	// 함수 실행의 결과로 '함수의 배열'을 반환할 수 없다. 단, '함수 포인터의 배열'을 반환할 수 있다.
	// 식별자 x는 배열이다.
	// 함수 실행의 결과로 int형 매개변수를 가지며 int를 반환하는 '함수 포인터의 배열'을 반환한다.

	return 0;
}