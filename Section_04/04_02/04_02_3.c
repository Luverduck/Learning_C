// 4.2 sizeof ������
/*
	���ڿ��� sizeof ����
	������ �����ϴ� char �迭�� �޸� ũ�Ⱑ ��ȯ�ȴ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// ���� �ϳ�
	char c;
	size_t size_char = sizeof(char);
	printf("%u\n", size_char);

	// ���ڿ�
	char string[10];
	size_t size_string = sizeof(string);
	printf("%u\n", size_string); // ��� : 10
};