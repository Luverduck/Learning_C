// 6.6 _Bool �ڷ���
/*
	_Bool
	���� ������ ��Ÿ���� �� �ڷ���
	1(true)�� 0(false)�� ���� ���´�
*/

#include <stdio.h>
#include <stdbool.h> 
// bool �ڷ���

int main(void)
{
	// stdbool.h�� bool�� ������ true(1), false(0)�� ���ǵǾ� �ִ�.
	bool bool_true = true;
	bool bool_false = false;

	printf("True is \t: %d\n", bool_true);
	printf("False is \t: %d\n", bool_false);

	return 0;
}