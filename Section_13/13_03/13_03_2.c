// 13.3 텍스트 인코딩과 코드 페이지
/*

*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // SetConsoleOutputCP()

int main(void)
{
	// 현재 파일의 문자를 읽는 방식 (949 : ks_c_5601-1987)
	const UINT default_cp = GetConsoleOutputCP();
	printf("%u\n", default_cp);

	int ch;
	FILE* file_read;
	FILE* file_write;

	const char* input_filename = "원본.txt";
	const char* output_filename = "사본.txt";

	unsigned long count = 0;

	if ((file_read = fopen(input_filename, "r")) == NULL)
	{
		printf("Can't open %s\n", input_filename);
		exit(EXIT_FAILURE);
	}

	if ((file_write = fopen(output_filename, "w")) == NULL)
	{
		printf("Can't open %s\n", output_filename);
		exit(EXIT_FAILURE);
	}

	// 파일의 문자를 읽기 전 인코딩 방식을 UTF-8로 변환
	SetConsoleOutputCP(CP_UTF8);

	while ((ch = fgetc(file_read)) != EOF)
	{
		fputc(ch, stdout);
		fputc(ch, file_write);
		count++;
	}

	fclose(file_read);

	// 파일의 문자열을 출력하기 전 인코딩 방식을 ks_c_5601-1987로 변환
	SetConsoleOutputCP(default_cp);

	printf("FILE %s has %lu characters\n", input_filename, count);

	return 0;
}