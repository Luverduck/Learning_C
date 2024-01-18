// 13.7 ��Ÿ ����� �Լ���
/*
	ungetc �Լ�
	���ڸ� ������ ��Ʈ���� ���� ������ [����] �� �� ��Ʈ�� ��ġ�� ���� �������� �ʱ�ȭ�Ѵ�.
	int ungetc( int c, FILE *stream );
	- c : '����' �� ���ڿ�
	- stream : '����' �� ��Ʈ��
	- [return] int : '����' �� ����
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	FILE* fp;
	int ch;
	long cur;

	// ���� ��Ʈ���� [�б�] ���� ����
	fp = fopen("input.txt", "r");
	
	// �ʱ� ���� ��Ʈ���� ��ġ
	cur = ftell(fp);
	printf("ftell = %ld\n", cur); // ��� : 0

	// ���� ��Ʈ������ ���� �ϳ��� �а� ch�� ������ �� ��Ʈ���� ��ġ�� �̵���Ų��.
	ch = fgetc(fp);	
	fputs(&ch, stdout);
	printf("\n");

	// ���� ��Ʈ���� ��ġ
	cur = ftell(fp);
	printf("ftell = %ld\n", cur); // ��� : 1

	// ch�� ���� ���� ��Ʈ���� [����] �Ѵ�.
	ungetc('b', fp);

	// ���� ��Ʈ���� ��ġ
	cur = ftell(fp);
	printf("ftell = %ld\n", cur); // ��� : 0

	// ���� ��Ʈ������ ���� �ϳ��� �а� ch�� ������ �� ��Ʈ���� ��ġ�� �̵���Ų��.
	ch = fgetc(fp);
	fputs(&ch, stdout);
	printf("\n");

	// ���� ��Ʈ���� ��ġ
	cur = ftell(fp);
	printf("ftell = %ld\n", cur); // ��� : 1

	// ���� ��Ʈ������ ���� �ϳ��� �а� ch�� ������ �� ��Ʈ���� ��ġ�� �̵���Ų��.
	ch = fgetc(fp);
	fputs(&ch, stdout);
	printf("\n");

	// ���� ��Ʈ���� ��ġ
	cur = ftell(fp);
	printf("ftell = %ld\n", cur); // ��� : 2

	fclose(fp);

	return 0;
}