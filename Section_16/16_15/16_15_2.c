// 16.15 assert ���̺귯��
/*
	assert.h
	C ����� ǥ�� ���̺귯����, assert ��ũ�θ� �����ϴ� ��� ����

	_Static_assert
	������ Ÿ�ӿ� assert�� �����Ѵ�.
	_Static_assert ( expression , message );
	- expression : assert �� ǥ����
	- message : assert�� ������ ��� �޽���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <limits.h>

_Static_assert(CHAR_BIT == 9, "9-bit char assumed");

int main(void)
{

	return 0;
}