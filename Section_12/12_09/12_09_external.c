#include <stdio.h>

extern int i = 0; // ��� X

void func()
{
	printf("%p\n", &i);
};