// 10.3 �������� ��� ����
/*
	�������� ����/���� (Pointer Addition/Substraction)
	�����Ϳ� ���� ����/���� �� �����Ͱ� ����Ű�� �ڷ��� ũ���� �����踸ŭ ���� ����/�����Ѵ�.
	���� �ּҸ� �������� ����/���� ���� ��° �������� �ּҸ� ����Ѵ�.
*/

#include <stdio.h>
int main(void)
{
	char* ptr_char = 0;
	int* ptr_int = 0;
	double* ptr_double = 0;

	char* ptr_char_next = ptr_char + 2;
	int* ptr_int_next = ptr_int + 2;
	double* ptr_double_next = ptr_double + 2;

	printf("%p %p\n", ptr_char, ptr_char_next);
	printf("%p %p\n", ptr_int, ptr_int_next);
	printf("%p %p\n", ptr_double, ptr_double_next);

	return 0;
}