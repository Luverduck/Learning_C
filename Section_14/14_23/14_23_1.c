// 14.23 �ڷ������� ������ �ٿ��ִ� typedef
/*
	����� typedef
	������ �����ϴ� �ڷ����� ��Ī�� �����Ѵ�.
*/

#include <stdio.h>
int main(void)
{
	// typedef�� ����
	// typedef�� ���ǵ� ��Ī�� ��� ������ ������ ������.

	// ��� �ۿ� ���ǵ� unsigned char �ڷ����� ��Ī
	typedef unsigned char BYTE;

	{
		// ��� �ȿ� ���ǵ� unsigned char �ڷ����� ��Ī
		typedef unsigned char byte;
	};

	return 0;
}