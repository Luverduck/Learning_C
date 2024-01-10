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
	int ch; // ������ ���� ��
	FILE* file_read; // �б� �� ������ �޸� �ּ�

	unsigned long count = 0; // ���� ��

	// ����� �μ��� ������� ���
	if (argc < 2)
	{
		printf("Usage : %s filename\n", argv[0]); // Usage : [filepath] [filename]
		exit(EXIT_FAILURE);
	}

	// ���� ��Ʈ���� ����. ( fr = fopen(argv[1], "r") )
	// ���� ��Ʈ���� ���� ���� ��� ( (fr = fopen(argv[1], "r")) == NULL )
	if ((file_read = fopen(argv[1], "r")) == NULL)
	{
		printf("Can't open %s\n", argv[1]); // Can't open [filename]
		exit(EXIT_FAILURE);
	}

	while ((ch = fgetc(file_read)) != EOF)
	{
		fputc(ch, stdout);

		count++;
	}

	// ���� ��Ʈ���� �ݴ´�.
	fclose(file_read);

	printf("FILE %s has %lu characters\n", argv[1], count);

	return 0;
}