// 6.6 _Bool �ڷ���
/*
	_Bool
	���� ������ ��Ÿ���� �� �ڷ���
	1(true)�� 0(false)�� ���� ���´�
*/

#include <stdio.h>
int main(void)
{
	// _Bool�� 3�� ����
	_Bool true_value = 2 < 3;
	_Bool false_value = 2 > 3;

	// ���� ���� (�Ǵ� 3�� ����)
	// [ǥ����] ? [true�� �� ��] : [false�� �� ��]
	printf(true_value ? "true" : "false");
	printf("\n");
	printf(false_value ? "true" : "false");

	return 0;
}