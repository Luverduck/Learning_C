// 13.3 텍스트 인코딩과 코드 페이지
/*
	텍스트 인코딩 (Text Ecoding)
	문자(Character)를 정해진 방식에 따라 바이너리 코드(Binary Code)로 변환하는 것
	텍스트 인코딩 방식으로는 UTF-8, UTF-16 등이 있다.
	바이너리 코드를 문자로 변환하는 것을 텍스트 디코딩(Text Decoding)이라 한다.
	인코딩 방식과 같은 방식으로 디코딩을 해야 원래 문자로 변환할 수 있다.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // SetConsoleOutputCP()

int main(void)
{
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

	while ((ch = fgetc(file_read)) != EOF)
	{
		fputc(ch, stdout);
		fputc(ch, file_write);
		count++;
	}

	fclose(file_read);

	printf("FILE %s has %lu characters\n", input_filename, count);

	return 0;
}