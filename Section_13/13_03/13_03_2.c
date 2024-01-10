// 13.3 �ؽ�Ʈ ���ڵ��� �ڵ� ������
/*

*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // SetConsoleOutputCP()

int main(void)
{
	// ���� ������ ���ڸ� �д� ��� (949 : ks_c_5601-1987)
	const UINT default_cp = GetConsoleOutputCP();
	printf("%u\n", default_cp);

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

	// ������ ���ڸ� �б� �� ���ڵ� ����� UTF-8�� ��ȯ
	SetConsoleOutputCP(CP_UTF8);

	while ((ch = fgetc(file_read)) != EOF)
	{
		fputc(ch, stdout);
		fputc(ch, file_write);
		count++;
	}

	fclose(file_read);

	// ������ ���ڿ��� ����ϱ� �� ���ڵ� ����� ks_c_5601-1987�� ��ȯ
	SetConsoleOutputCP(default_cp);

	printf("FILE %s has %lu characters\n", input_filename, count);

	return 0;
}