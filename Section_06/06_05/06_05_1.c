// 6.5 ��ǰ� ����
/*
	���� ǥ���� (Relational Expression)
	���� �����ڷ� ��Ÿ�� ǥ����
	1(true) �Ǵ� 0(false)�� ���� ���´�.
*/

#include <stdio.h>
int main(void)
{
	// ���� ǥ������ ��(value)
	int true_value = 2 < 3;
	int false_value = 2 > 3;

	printf("True value \t: %d\n", true_value);	// ��� : 1 (true)
	printf("False value \t: %d\n", false_value);	// ��� : 0 (false)

	return 0;
}