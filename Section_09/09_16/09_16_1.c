// 9.16 ����ŷ� �޸� �鿩�ٺ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main(void)
{
	unsigned char a = UCHAR_MAX;
	unsigned int b = UINT_MAX;
	unsigned long long c = ULLONG_MAX;

	unsigned char* a_ptr = &a;
	unsigned int* b_ptr = &b;
	unsigned long long* c_ptr = &c;

	printf("%p %p %p\n", &a, &b, &c);

	return 0;
}