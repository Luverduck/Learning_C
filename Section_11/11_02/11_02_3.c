// 11.2 �޸� ���̾ƿ��� ���ڿ�

#include <stdio.h>
int main(void)
{
	// ���ڿ��� Ư¡
	
	// 2. ���ڿ� ���ͷ��� ���ڿ��� ���� �ٸ� �޸� ������ ����ȴ�.

	// ���ڿ� ���ͷ� (Code segment�� ����)
	const char* ptr_str = "I am a String.";

	// ���ڿ� (Heap segment�� ����)
	char str[] = "I am a String.";

	// ���ڿ� ���ͷ��� ���ڿ��� �޸� �ּ� ���
	printf("%p %p\n", ptr_str, str);
	// ��� : 000055EB27379004 00007FFF63D21FB9

	return 0;
}