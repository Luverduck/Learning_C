// 11.2 �޸� ���̾ƿ��� ���ڿ�

#include <stdio.h>
int main(void)
{
	// ���ڿ��� Ư¡

	// 4. ������ ��� ������ ���� ���ڿ��� ����� �� �ִ�.
	
	// �迭�� ����� ���ڿ�
	char str[] = "I am a String.";

	// ���ڿ� ���
	// 1) �迭 ������ ����
	for (int i = 0; i < sizeof(str); ++i) {
		putchar( str[i] );
	}
	printf("\n");

	// 2) ������ ��� ����
	for (int i = 0; i < sizeof(str); ++i) {
		putchar( *(str + i) );
	}
	printf("\n");

	return 0;
}