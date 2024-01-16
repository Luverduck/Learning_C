// 13.4 텍스트 파일의 입출력 함수들
/*
	fopen 함수
	파일과의 스트림을 [열기] 한다.
	FILE *fopen(const char *filename, const char *mode);
	- filename : 스트림 [열기] 할 파일의 경로
	- mode : 스트림 유형
		“r” : 파일의 데이터를 [읽기] 한다.
		“w” : 파일에 데이터를 [쓰기] 한다.
		“a” : 파일의 데이터 끝에 새로운 데이터를 [추가] 한다.
		“r+” : 파일의 데이터를 [읽기] 하거나 파일에 데이터를 [쓰기] 한다. (반드시 파일이 존재해야 한다)
		“w+” : 파일에 데이터를 [읽기] 하거나 파일에 데이터를 [쓰기] 한다.
		“a+” : 파일의 데이터를 [읽기] 하거나 파일에 데이터를 [추가] 한다.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 31

int main(void)
{
	// 파일의 포인터
	FILE* fp;	// 파일의 포인터
	// 읽은 문자열을 저장할 문자 배열
	char words[MAX] = { '\0' };
	// 읽을 파일명 (실행 파일이 존재하는 위치를 기준으로 상대 경로)
	const char* filename = "record";

	// fopen 함수
	// i) r+ 모드
	// - 파일의 데이터를 [읽기] 하거나 파일에 데이터를 [쓰기] 한다.
	// - r+ 모드는 반드시 파일이 존재해야 한다.
	//if ((fp = fopen(filename, "r+")) == NULL)
	//{
	//	fprintf(stderr, "Can't open \"%s\" file.\n", filename);
	//	exit(EXIT_FAILURE);
	//}

	// ii) w+ 모드
	// - 파일의 데이터를 [읽기] 하거나 파일에 데이터를 [쓰기] 한다.
	// - w+ 모드는 파일이 없으면 새로 만든다.
	if ((fp = fopen(filename, "w+")) == NULL)
	{
		fprintf(stderr, "Can't open \"%s\" file.\n", filename);
		exit(EXIT_FAILURE);
	}

	// iii) a+ 모드
	// - 파일의 데이터를 [읽기] 하거나 파일에 데이터를 [추가] 한다.
	// - a+ 모드는 파일이 없으면 새로 만든다.
	if ((fp = fopen(filename, "a+")) == NULL)
	{
		fprintf(stderr, "Can't open \"%s\" file.\n", filename);
		exit(EXIT_FAILURE);
	}

	return 0;
}