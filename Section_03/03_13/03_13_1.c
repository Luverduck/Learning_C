// 3.13 불리언형 (Boolean types)
/*
	boolean 
*/

#include <stdio.h>
#include <stdbool.h> // 불리언형에 대한 헤더 파일
int main(void)
{
	// 불리언형의 크기
	printf("%u\n", sizeof(_Bool)); // 1[Byte]

	// 불리언형
	_Bool b1;
	b1 = 0; // false
	b1 = 1; // true

	// 불리언형의 서식 지정자는 따로 없다.
	printf("%d\n", b1); // 결과 : 1

	// stdbool.h에 포함된 불리언형
	bool b2, b3;
	b2 = true;
	b3 = false;

	printf("%d %d", b2, b3); // 결과 : 1 0

	return 0;
}