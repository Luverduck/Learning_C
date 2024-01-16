// 13.4 �ؽ�Ʈ ������ ����� �Լ���
/*
	fopen �Լ�
	���ϰ��� ��Ʈ���� [����] �Ѵ�.
	FILE *fopen(const char *filename, const char *mode);
	- filename : ��Ʈ�� [����] �� ������ ���
	- mode : ��Ʈ�� ����
		��r�� : ������ �����͸� [�б�] �Ѵ�.
		��w�� : ���Ͽ� �����͸� [����] �Ѵ�.
		��a�� : ������ ������ ���� ���ο� �����͸� [�߰�] �Ѵ�.
		��r+�� : ������ �����͸� [�б�] �ϰų� ���Ͽ� �����͸� [����] �Ѵ�. (�ݵ�� ������ �����ؾ� �Ѵ�)
		��w+�� : ���Ͽ� �����͸� [�б�] �ϰų� ���Ͽ� �����͸� [����] �Ѵ�.
		��a+�� : ������ �����͸� [�б�] �ϰų� ���Ͽ� �����͸� [�߰�] �Ѵ�.
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
	const char* filename = "record";

	// fopen �Լ�
	// i) r+ ���
	// - ������ �����͸� [�б�] �ϰų� ���Ͽ� �����͸� [����] �Ѵ�.
	// - r+ ���� �ݵ�� ������ �����ؾ� �Ѵ�.
	//if ((fp = fopen(filename, "r+")) == NULL)
	//{
	//	fprintf(stderr, "Can't open \"%s\" file.\n", filename);
	//	exit(EXIT_FAILURE);
	//}

	// ii) w+ ���
	// - ������ �����͸� [�б�] �ϰų� ���Ͽ� �����͸� [����] �Ѵ�.
	// - w+ ���� ������ ������ ���� �����.
	if ((fp = fopen(filename, "w+")) == NULL)
	{
		fprintf(stderr, "Can't open \"%s\" file.\n", filename);
		exit(EXIT_FAILURE);
	}

	// iii) a+ ���
	// - ������ �����͸� [�б�] �ϰų� ���Ͽ� �����͸� [�߰�] �Ѵ�.
	// - a+ ���� ������ ������ ���� �����.
	if ((fp = fopen(filename, "a+")) == NULL)
	{
		fprintf(stderr, "Can't open \"%s\" file.\n", filename);
		exit(EXIT_FAILURE);
	}

	return 0;
}