// 3.6 ������ �����÷ο�
/*
	sizeof()
	- �ڷ����̳� ������ ũ��(�޸� ũ��)�� ��ȯ���ִ� '������'
	- sizeof() ���� ����� size_t ������ �ڷ����� ������.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i = 0;
	int size = sizeof(i);

	// sizeof()
	sizeof(int); // sizeof(�ڷ���)
	sizeof(i);	// sizeof(����)

	// sizeof() ������ ����� ����ϱ� ���� ���� �����ڷ� %u�� ����Ѵ�.
	printf("%u\n", sizeof(int)); // ��� : 4
	printf("%u\n", sizeof(i)); // ��� : 4

	return 0;
}