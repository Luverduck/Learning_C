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
int main(void)
{
	// 자동 변수의 특징

	// 1. auto 키워드로 선언하며, 키워드를 생략할 수 있다. 또한 반드시 직접 초기화해야 한다.
	// - auto 키워드로 선언
	auto int x = 0;
	// - auto 키워드 생략
	int y = 0;

	// 2. 자동 변수의 영역 안에서만 자동 변수의 식별자를 사용할 수 있다.
	// - 자동 변수의 영역 안
	{ // 자동 변수 i의 영역 [START]
		auto int i = 1;
		{
			// 자동 변수의 영역 내에 있는 새로운 블록에서도 자동 변수의 식별자 사용 가능
			printf("i = %d\n", i);
		}
	} // 자동 변수 i의 영역 [END]

	// - 자동 변수의 영역 밖
	{
		{ // 자동 변수 j의 영역 [START]
			int j = 5;
		} // 자동 변수 j의 영역 [END]
		// 자동 변수의 영역 밖에서는 자동 변수의 식별자 사용 불가능
		// printf("j = %d\n", j);
	}

	// 3. 블록 안과 밖에 동일한 식별자가 존재할 때 블록 안에서 블록 밖의 식별자는 숨김 처리 된다. (name hiding)
	int k = 2;

	printf("k %lld\n", (long long)&k);    // 결과 : 856600212932

	{
		int j = 10; // name hiding
		printf("k %lld\n", (long long)&k);  // 결과 : 856600212964
	}

	// 4. 블록이 없을 경우 자동 변수의 영역은 문장(Statement)의 시작부터 문장의 끝(;)까지가 된다.
	for (int l = 0; l < 10; ++l) 
		printf("%d\n", l);

	return 0;
}