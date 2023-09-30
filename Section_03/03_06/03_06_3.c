// 3.6 ������ �����÷ο�
/*
	��� ���� <limits.h>
	�ڷ����� �ִ� ũ��� �ּ� ũ�Ⱑ ���ǵǾ� �ִ�. 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h> // �ڷ����� �ִ� ũ�⿡ ���� ��ũ�� ����� ���Ե� ��� ����
int main(void)
{
	// unsigned int�� ũ��� 8[Byte] = 32[bit]
	// unsigned int�� ���� �� �ִ� �ִ밪
	unsigned int unsigned_int_max = 0b11111111111111111111111111111111; 
	printf("%u\n", unsigned_int_max);

	// ��� ���� limit.h�� ���Ե� ��ũ�� UINT_MAX��
	unsigned int unsigned_int_max_macro = UINT_MAX;
	printf("%u\n", unsigned_int_max_macro); // ��� : 4294967295
	// ���� �����ڸ� %u�� �ƴ� %d�� �� ���
	printf("%d\n", unsigned_int_max_macro); // ��� : -1

	// unsigned int
	// �ִ밪
	unsigned int u_int_max = UINT_MAX;
	printf("max of uint = %u\n", u_int_max); // ��� : 4294967295
	// �ּҰ�
	unsigned int u_int_min = 0;
	printf("min of uint = %u\n", u_int_min); // ��� : 0

	// signed int
	// �ִ밪
	int s_int_max = INT_MAX;
	printf("max of int = %d\n", s_int_max); // ��� : 2147483647
	// �ּҰ�
	int s_int_min = INT_MIN;
	printf("min of int = %d\n", s_int_min); // ��� : -2147483648

	return 0;
}