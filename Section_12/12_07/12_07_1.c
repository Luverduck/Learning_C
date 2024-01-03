// 12.7 블록 영역의 정적 변수
/*
	블록 영역 정적 변수 (Static Variable with Block Scope)
	Static with no linkage Class에 속하는 변수
	- 지속 시간 : static
	- 변수 영역 : block
	- 연결 상태 : none
	- 저장 위치 : 데이터 영역 또는 BSS 영역
*/

#include <stdio.h>

void func();

int main(void)
{
	// 블록 영역 정적 변수의 특징

	// 1. 블록 안에서 static 키워드로 선언한다.
	{
		static int x = 0;
	}

	// 2. 변수가 속한 블록 안에서만 식별자를 사용할 수 있다. (block scope)
	// - 변수가 속한 블록 안
	{ // 변수 i의 영역 [START]
		static int i = 1;
		{
			// 변수가 속한 블록 안에서는 식별자 사용 가능
			printf("i = %d\n", i);
		}
	} // 변수 i의 영역 [END]
	// - 변수가 속한 블록 밖
	{
		{ // 변수 j의 영역 [START]
			int j = 5;
		} // 변수 j의 영역 [END]
		// 변수가 속한 블록 밖에서는 식별자 사용 불가능
		// printf("j = %d\n", j);
	}

	// 3. 변수가 속한 블록이 끝나도 변수에 저장된 값을 유지한다. (static storage duration)
	func();
	func();

	return 0;
}

void func()
{
	static int k = 0;
	printf("%d\n", k);
	k++;
};

// 4. 정적 변수는 매개 변수로 사용할 수 없다.
/*
int func(static int l) {
	// ...
};
*/