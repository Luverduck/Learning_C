// 11.2 �޸� ���̾ƿ��� ���ڿ�

#include <stdio.h>
int main(void)
{
	// ���ڿ��� Ư¡

	// 4. ������ ��� ������ ���� ���ڿ��� ����� �� �ִ�.

	// �����ͷ� ����� ���ڿ�
	const char* ptr_str = "I am a String.";

	// ���ڿ� ���
	// i) ���̸� �ƴ� ���
	// 1) �迭 ������ ����
	for (int i = 0; i < 15; ++i) {
		putchar( ptr_str[i] );
	}
	printf("\n");

	// 2) ������ ��� ����
	for (int i = 0; i < 15; ++i) {
		putchar( *(ptr_str + i) );
	}
	printf("\n");

	// ii) ���̸� �𸣴� ���
	while (*ptr_str != '\0') {
		putchar( *(ptr_str++) );
	}

	return 0;
}