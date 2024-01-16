// 13.4 �ؽ�Ʈ ������ ����� �Լ���
/*
	fprintf �Լ�
	��Ʈ���� ������ �������� ���ڿ��� [����] �Ѵ�.
	int fprintf( FILE *stream, const char *format, ... );
	- stream : [����] �� ������ ��Ʈ��
	- format : [����] �� ���ڿ� ����
	- ... : ���ڿ� ���Ŀ��� ���� �������� �μ�
	- [return] int : [����] �� ���� [byte]�� ��

	fscanf �Լ�
	��Ʈ������ ������ �������� ���ڿ��� [�б�] �� �� ���� �����ڿ� �����ϴ� �μ��� �����Ѵ�.
	int fscanf( FILE *stream, const char *format, ... );
	- stream : [�б�] �� ������ ��Ʈ��
	- format : [�б�] �� ���ڿ� ����
	- ... : ���ڿ� ���Ŀ��� ���� �������� �μ�
	- [return] int : [�б�] �� ���ڿ� �� �μ��� ���� ������ ��
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 31

int main(void)
{
	// ������ ������
	FILE* fp;	// ������ ������
	// ���� ���ڿ��� ������ ���� �迭
	char words[MAX] = { '\0' };
	// ���� ���ϸ� (���� ������ �����ϴ� ��ġ�� �������� ��� ���)
	const char* filename = "record.txt";

	// "record.txt" ���ϰ��� ��Ʈ�� ����
	if ((fp = fopen(filename, "w+")) == NULL)
	{
		fprintf(stderr, "Can't open \"%s\" file.\n", filename);
		exit(EXIT_FAILURE);
	}

	// fscanf / fprintf�� ���� �����
	// console�� �Է� [�б�]�� �� 'record.txt' ���Ϸ� [����]
	while ((fscanf(stdin, "%30s", words) == 1) && (words[0] != '.')) {
		fprintf(fp, "%s", words);
	}

	// ���� ��ġ �����ڸ� ������ ��Ʈ���� ���� �������� ����
	rewind(fp);

	// 'record.txt' ������ �ؽ�Ʈ�� [�б�] �� �� console�� [����]
	while (fscanf(fp, "%s", words) != EOF) {
		fprintf(stdout, "%s\n", words);
	}

	// ���� ��Ʈ�� �ݱ�
	if (fclose(fp) != 0) {
		fprintf(stderr, "Error closing file\n");
	}

	return 0;
}