// 16.8 �̸� ���ǵ� ��ũ�ε�, #line, #error
/*
	#line
	__LINE__�� __FILE__ ��ũ�θ� �������Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("__LINE__ : %d\n", __LINE__);
	printf("__FILE__ : %s\n", __FILE__);

	printf("\n");

#line 7 "Hello.txt"
	printf("After #line\n");
	printf("__LINE__ : %d\n", __LINE__);
	printf("__FILE__ : %s\n", __FILE__);

	return 0;
}