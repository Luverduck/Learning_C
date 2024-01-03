// 12.5 자동 변수
/*
	자동 변수 (Automatic Variable)
	Automatic Storage Class에 속하는 변수
	- 지속 시간 : automatic
	- 변수 영역 : block
	- 연결 상태 : none
	- 저장 위치 : 스택(Stack)
*/

#include <stdio.h>

void func()
{
	int i = 0;
	printf("%d\n", i);
	i++;
};

int main(void)
{
	// 자동 변수의 특징

	// 1. auto 키워드로 선언하며, 키워드를 생략할 수 있다. 또한 반드시 직접 초기화해야 한다.
	// - auto 키워드로 선언
	auto int x = 0;
	// - auto 키워드 생략
	int y = 0;

	// 2. 변수가 속한 블록 안에서만 식별자를 사용할 수 있다. (block scope)
	// - 변수가 속한 블록 안
	{ // 변수 i의 영역 [START]
		auto int i = 1;
		{
			// 변수가 속한 블록 안에서는 식별자 사용 가능
			printf("i = %d\n", i);
		}
	} // 변수 i의 영역 [END]

	// - 변수가 속한 블록 밖 (automatic storage duration)
	{
		{ // 변수 j의 영역 [START]
			int j = 5;
		} // 변수 j의 영역 [END]
		// 변수가 속한 블록 밖에서는 식별자 사용 불가능
		// printf("j = %d\n", j);
	}

	// 3. 변수가 속한 블록이 끝나면 자동으로 메모리를 해제한다. (automatic storage duration)
	func(); // 결과 : 0
	func(); // 결과 : 0

	// 4. 블록 안과 밖에 동일한 식별자가 존재할 때 블록 안에서 블록 밖의 식별자는 숨김 처리 된다. (name hiding)
	int k = 2;

	printf("k %lld\n", (long long)&k);    // 결과 : 856600212932

	{
		int j = 10; // name hiding
		printf("k %lld\n", (long long)&k);  // 결과 : 856600212964
	}

	// 5. 블록이 없을 경우 자동 변수의 영역은 문장(Statement)의 시작부터 문장의 끝(;)까지가 된다.
	for (int l = 0; l < 10; ++l) 
		printf("%d\n", l);

	return 0;
}