// 16.9 #pragma ������
/*
	��ó�� ������ #pragma
	�����Ϸ��� Ư�� �۾��� �ϵ��� �����Ѵ�.
*/

#include <stdio.h>

// #pragma pack
// ����ü ����� ���� ����� �����Ѵ�.
#pragma pack(2)

struct Number
{
	int i;
	char ch;
	double d;
};

int main(void)
{
	struct Number number;
	printf("Size of number is : %zd", sizeof(number));
	return 0;
}