// 6.6 _Bool �ڷ���
/*
	_Bool
	���� ������ ��Ÿ���� �� �ڷ���
	1(true)�� 0(false)�� ���� ���´�
*/

#include <stdio.h>
int main(void)
{
	// _Bool�� �� ���
	_Bool true_value = 2 < 3;
	_Bool false_value = 2 > 3;

	printf("True is \t: %d\n", true_value); // ��� : True is : 1
	printf("False is \t: %d\n", false_value); // ��� : False is : 0

	return 0;
}