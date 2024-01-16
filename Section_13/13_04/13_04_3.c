// 13.4 �ؽ�Ʈ ������ ����� �Լ���
/*
	fputs �Լ�
	��Ʈ���� ���� �ϳ��� [����] �Ѵ�. (��, NULL ���ڴ� [����]���� �ʴ´�.)
	int fputs( const char *str, FILE *stream );
	- str : [����] �� ���ڿ�
	- stream : [����] �� ������ ��Ʈ��
	- [return] int : ������ ��� ���� �Ǵ� EOF(-1) ��ȯ

	fgets �Լ�
	��Ʈ������ (n-1)���� ���ڸ� [�б�] �� �� str�� ����Ű�� ���ڿ��� �����Ѵ�.
	char *fgets( char *str, int n, FILE *stream );
	- str : [�б�] �� ���ڿ��� ������ ���ڿ�
	- n : [�б�] �� ������ �� ( (n-1)���� ���ڸ� �а� NULL ���ڸ� �ٿ� str�� ����)
	- stream : [�б�] �� ������ ��Ʈ��
	- [return] char* : ���� ���ڿ��� ������ str�� ��ȯ (������ ��� NULL ��ȯ)
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

	// fgets / fputs�� ���� �����
	// console�� �Է� [�б�]�� �� 'record.txt' ���Ϸ� [����]
	while ((fgets(words, MAX, stdin) != NULL) && (words[0] != '.')) {
		fputs(words, fp);
	}

	// ���� ��ġ �����ڸ� ������ ��Ʈ���� ���� �������� ����
	rewind(fp);

	// 'record.txt' ������ �ؽ�Ʈ�� [�б�] �� �� console�� [����]
	while (fgets(words, "%s", fp) != NULL) {
		fputs(words, stdout);
	}

	// ���� ��Ʈ�� �ݱ�
	if (fclose(fp) != 0) {
		fprintf(stderr, "Error closing file\n");
	}

	return 0;
}