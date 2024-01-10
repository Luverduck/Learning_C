// 13.3 텍스트 인코딩과 코드 페이지
/*
	
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