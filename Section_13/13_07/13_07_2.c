// 13.7 ��Ÿ ����� �Լ���
/*
	setvbuf �Լ�
	��Ʈ�� ���۸� ����� �����Ѵ�.
	int setvbuf( FILE *stream, char *buffer, int mode, size_t size );
	- stream : ���۸� ����� ������ ��Ʈ��
	- buffer : ����� ����
	- mode : ���۸� ���
	- size : ������ ũ��
	- [return] int : ������ ������ ��� non-zero ��ȯ

	���۸� ���
	- _IOFBF ( Input/Output Full Buffering Mode )
	- _IOLBF ( Input/Output Line Buffering Mode )
	- _IONBF ( Input/Output None Buffering Mode )
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	FILE* fp;
	int ch;

	// ���� ��Ʈ���� [�б�] ���� ����.
	fp = fopen("input.txt", "r");

	// ���� �ʱ�ȭ
	char buffer[32] = { '\0', };

	// ��Ʈ�� ���۸� ��� ���� (Full Buffring Mode)
	setvbuf(fp, buffer, _IOFBF, sizeof(buffer)); 

	// ������ ��� Ȯ��
	for (int i = 0; i < sizeof(buffer); ++i)
		printf("%hhd ", buffer[i]);
	printf("\n");

	// ���� ��Ʈ������ ���� �ϳ��� �д´�.
	ch = fgetc(fp);

	// ������ ��� Ȯ��
	for (int i = 0; i < sizeof(buffer); ++i)
		printf("%c ", buffer[i]);
	printf("\n");

	for (int i = 0; i < sizeof(buffer); ++i)
		printf("%hhd ", buffer[i]);
	printf("\n");

	fclose(fp);

	return 0;
}