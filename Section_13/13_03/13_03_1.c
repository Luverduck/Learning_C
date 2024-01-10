// 13.3 �ؽ�Ʈ ���ڵ��� �ڵ� ������
/*
	�ؽ�Ʈ ���ڵ� (Text Ecoding)
	����(Character)�� ������ ��Ŀ� ���� ���̳ʸ� �ڵ�(Binary Code)�� ��ȯ�ϴ� ��
	�ؽ�Ʈ ���ڵ� ������δ� UTF-8, UTF-16 ���� �ִ�.
	���̳ʸ� �ڵ带 ���ڷ� ��ȯ�ϴ� ���� �ؽ�Ʈ ���ڵ�(Text Decoding)�̶� �Ѵ�.
	���ڵ� ��İ� ���� ������� ���ڵ��� �ؾ� ���� ���ڷ� ��ȯ�� �� �ִ�.
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

	const char* input_filename = "����.txt";
	const char* output_filename = "�纻.txt";

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