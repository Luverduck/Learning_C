// 6.11 콤마 연산자
/*
	콤마 연산자 (Comma Operator)
	하나 이상의 피연산자 또는 표현식들을 연결하는 연산자
	- 첫 번째 피연산자 또는 표현식을 평가한 후, 그 다음 피연산자 또는 표현식을 평가한다.
	- 평가 사이에 시퀀스 포인트가 있다.

	콤마 연산자의 결합(Associativity)
	콤마 연산자는 왼쪽에서 오른쪽 방향으로 결합한다.
*/

#include <stdio.h>
int main(void)
{
	int x, y, z;	
	z = x = 1, y = 2;		// (z = x = 1) 연산 -> (y = 2) 연산
	printf("x=%d, y=%d, z=%d \n", x, y, z);
	// 1) (z = x = 1) 연산
	//   1-1) x = 1 대입 후 대입 연산의 결과로 1을 반환
	//   1-2) 반환한 값 1을 z에 대입 후 대입 연산의 결과로 1을 반환
	// 2) (y = 2) 연산
	//   2-1) y = 2 대입 후 대입 연산의 결과로 2를 반환
	// 3) (z = x = 1) 연산 후 반환한 1과 (y = 2) 연산 후 반환한 2를 콤마 연산한 후 그 결과값으로 2를 반환

	z = ((x = 1), (y = 2));	// (x = 1) 연산 -> (y = 2) 연산 -> z = ((x = 1), (y = 2)) 연산
	printf("x=%d, y=%d, z=%d \n", x, y, z);
	// 1) (x = 1) 연산
	//   1-1) x = 1 대입 후 대입 연산의 결과로 1을 반환
	// 2) (y = 2) 연산
	//   2-1) y = 2 대입 후 대입 연산의 결과로 2를 반환
	// 3) z = ((x = 1), (y = 2)) 연산
	//   3-1) (x = 1) 연산 후 반환한 1과 (y = 2) 연산 후 반환한 2를 콤마 연산한 후 그 결과값으로 2를 반환

	return 0;
}