// 9.16 ����ŷ� �޸� �鿩�ٺ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>

int main(void)
{
	int a = 2, b = 17, c = 256, d = INT64_MAX;

	int* a_ptr = &a, * b_ptr = &b, * c_ptr = &c, * d_ptr = &d;

	printf("%p %p %p %p\n", &a, &b, &c, &d);

	return 0;
}