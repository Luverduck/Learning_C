// 5.2 ���� �����ڿ� �� ���� ����
/*
	���� ������ (Assignment Operator)
	������ �ǿ����ڿ� �������� �ǿ����ڸ� ����

	���� �����ڿ� ���õ� ����
	Data Object : �Ҵ�� �޸� ���� (object)
	L-value : �޸� �ּҰ� (object locator value)
	R-value : ǥ������ �� (value of an expression)
*/

#include <stdio.h>
int main(void)
{
	// ���� �Ұ����� L-value
	const int num_const = 1; // ���⼭ ��ȣ '='�� ������ �ƴ϶� �ʱ�ȭ�� �ǹ��Ѵ�. 

	// ���� ������ L-value
	int num_a;
	int num_b;
	int num_c;

	num_a = 1;
	num_b = num_a;
	num_c = num_const * (num_a + num_b); // ���⼭ (num_a + num_b)�� ����� ������ ������� R-value

	return 0;
}