// 12.5 자동 변수
/*
	Automatic Storage Class
	- 지속 시간 : automatic
	- 영역 : block
	- 연결 : 없음
*/

#include <stdio.h>
int main(void)
{
	// 자동 변수의 특징

	// 1. auto 키워드로 선언하며, 키워드를 생략할 수 있다. 또한 반드시 직접 초기화해야 한다.
	// - auto 키워드로 선언
	auto int x = 0;
	// - auto 키워드 생략
	int y = 0;

	// 2. 블록 안에서 블록 밖에 있는 자동 변수의 식별자를 사용할 수 있다.
	int i = 1;

	{
		printf("i = %d\n", i);
	}

	// 3. 블록 안과 밖에 동일한 식별자가 존재할 때 블록 안에서 블록 밖의 식별자는 숨김 처리 된다. (name hiding)
	int j = 2;

	printf("j %lld\n", (long long)&j);

	{
		int j = 10; // name hiding
		printf("j %lld\n", (long long)&j);
	}

	return 0;
}