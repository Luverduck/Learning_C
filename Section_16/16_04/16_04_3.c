// 16.4 함수 같은 매크로
/*
	함수 같은 매크로 (Function-Like Macro)
	매크로 인수에 의해 매크로로 정의된 표현식의 결과가 결정되는 매크로

	 함수 같은 매크로를 사용할 때 주의할 점
	- 매크로 인수로 표현식을 작성할 때 인수에 소괄호 ( )를 포함하여 정의해야 한다.
*/

#define SQUARE(X) ((X)*(X))

#include <stdio.h>
int main(void)
{
	// 증감 연산자 문제
	int a = 1;
	printf("%d\n", SQUARE(++a));
	// 결과 : 9 = ++a * ++a
	// 1) 첫 번째 증감 연산에서 a의 값은 2가 된다.
	// 2) 두 번째 증감 연산에서 a의 값은 3이 된다.
	// 3) 이 상태에서 표현식을 평가하면 3 * 3 = 9 가 된다.

	return 0;
}