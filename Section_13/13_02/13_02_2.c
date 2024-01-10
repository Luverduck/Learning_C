// 13.2 �ؽ�Ʈ ���� ����� ����
/*
	FILE
	������ ó���ϱ� ���� ����ü
	typedef struct _iobuf
	{
		char* _ptr;
		int _cnt;
		char* _base;
		int _flag;
		int _file;
		int _charbuf;
		int _bufsiz;
		char* _tmpfname;
	} FILE;
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	// �ؽ�Ʈ ����(.txt)�� ���ڵ��� �а� ȭ�鿡 ����ϴ� ���α׷�

	int ch; // ������ ���� ��
	FILE* file_read; // �б� �� ������ �޸� �ּ�

	// TO DO: file pointer to write
	FILE* file_write; // ���� �� ������ �޸� �ּ�

	unsigned long count = 0; // ���� ��

	// ����� �μ��� ������� ���
	if (argc < 2)
	{
		printf("Usage : %s filename\n", argv[0]); // Usage : [filepath] [filename]
		exit(EXIT_FAILURE);
	}

	if ((file_read = fopen(argv[1], "r")) == NULL)
	{
		printf("Can't open %s\n", argv[1]); // Can't open [filename]
		exit(EXIT_FAILURE);
	}

	// TO DO: open file to write with "w" mode string
	if ((file_write = fopen(argv[2], "w")) == NULL)
	{
		printf("Can't open %s\n", argv[1]); // Can't open [filename]
		exit(EXIT_FAILURE);
	}

	while ((ch = fgetc(file_read)) != EOF)
	{
		fputc(ch, stdout);
		
		// TO DO: use fputc() to write a file stream!
		fputc(ch, file_write);

		count++;
	}

	// ���� ��Ʈ���� �ݴ´�.
	fclose(file_read);
	fclose(file_write);

	printf("FILE %s has %lu characters\n", argv[1], count);
	printf("Copied to  %s\n", argv[2]);

	return 0;
}