// 11.2 �޸� ���̾ƿ��� ���ڿ�

#include <stdio.h>
int main(void)
{
	// ���ڿ��� Ư¡

	// 5. ���ڿ��� ���� ���� (shallow copy)
	const char* ptr_str = "I am a String.";
	const char* ptr_str_copy;

	ptr_str_copy = ptr_str;

	// ���� ���ڿ�
	printf("%s %p %p\n", ptr_str, ptr_str, &ptr_str);
	// ��� : I am a String. 00007FF70A209D08 000000D0327BF9C8

	// ������ ���ڿ�
	printf("%s %p %p\n", ptr_str_copy, ptr_str_copy, &ptr_str_copy);
	// ��� : I am a String. 00007FF70A209D08 000000D0327BF9E8

	return 0;
}