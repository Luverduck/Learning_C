// 16.9 #pragma ������
/*
	��ó�� ������ #pragma
	�����Ϸ��� Ư�� �۾��� �ϵ��� �����Ѵ�.
*/

#include <stdio.h>

// #pragma warning
// �����Ϸ� ��� �޽����� �����Ѵ�.
#pragma warning( disable : 4477 )
//#pragma warning( error : 4477 )

struct Number
{
	int i;
	char ch;
	double d;
};

int main(void)
{
	struct Number number;
	printf("Size of number is : %d", sizeof(number));
	return 0;
}