// 10.3 �������� ��� ����
/*
	�������� ���� ����(Pointer Increment/Decrement)
	������ ���� ���� �� �����Ͱ� ����Ű�� �ڷ��� ũ�⸸ŭ ���� ����/�����Ѵ�.
	���� �ּҸ� �������� ����/���� ��° �������� �ּҸ� ����Ѵ�.
*/

#include <stdio.h>
int main(void)
{
	char* ptr_char = 0;
	int* ptr_int = 0;
	double* ptr_double = 0;

	char* ptr_char_next = ++ptr_char;
	int* ptr_int_next = ++ptr_int;
	double* ptr_double_next = ++ptr_double;

	printf("%p %p\n", ptr_char, ptr_char_next);
	printf("%p %p\n", ptr_int, ptr_int_next);
	printf("%p %p\n", ptr_double, ptr_double_next);

	return 0;
}