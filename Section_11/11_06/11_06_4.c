// 11.6 �پ��� ���ڿ� �Լ���
/*
	���ڿ� ���� (string copy)

	strcpy / strncpy �Լ�
	���ڿ��� �����Ѵ�.
	char *strcpy( char *strDestination, const char *strSource );
	char *strncpy( char *strDestination, const char *strSource, size_t count );
	- strDestination : ��� ���ڿ�
	- strSource : ��� ���ڿ��� ������ ���ڿ�
	- count : ������ ������ ��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	// strcpy / strncpy �Լ� ����(������ ��)
	char strDestination[12] = "Black Berry";
	char strSource[] = "Green";

	// strcpy �Լ��� strSource�� ��� ���ڿ��� strDestination�� �����Ѵ�.
	// strDestination�� strSource�� ��� ���ڿ��� ����
	strcpy(strDestination, strSource);
	puts(strDestination);

	// strncpy �Լ��� strSource���� count ��ŭ�� ���ڿ��� strDestination�� �����Ѵ�.
	// ����, ������ ���ڿ��� ���ڿ��� ���� �ǹ��ϴ� �� ���� `\0`�� �ڵ����� �߰������� �ʴ´�.
	// strDestination�� strSource�� 5�� ���ڿ��� ����
	strncpy(strDestination, strSource, 5);
	puts(strDestination);

	return 0;
}
