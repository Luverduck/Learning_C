// 11.2 �޸� ���̾ƿ��� ���ڿ�

#include <stdio.h>
int main(void)
{
	// ���ڿ��� Ư¡
	
	// 1. ������ ���ڿ��� ���� �� ������ �� Code ������ ���� 1ȸ�� �Ҵ��ϸ� �ش� ���� �����Ѵ�.
	const char* ptr_str_1 = "I am a String.";
	const char* ptr_str_2 = "I am a String.";
	const char* ptr_str_3 = "I am a String!!!";

	printf("%p %p %p\n", ptr_str_1, ptr_str_2, ptr_str_3);
	// ��� : 00007FF681DC9C28 00007FF681DC9C28 00007FF681DC9C40

	printf("%p\n", "I am a String.");
	// ��� : 00007FF681DC9C28

	return 0;
}