// 3.6 ������ �����÷ο�
/*
	�����÷ο� (Overflow)
	��ǻ���� ��� ����(arithmetic operation)�� ���� ǥ�� ������ �ʰ��ϴ� ���� ������ �� �߻��ϴ� ����
*/

#include <stdio.h>
#include <limits.h> // �ڷ����� �ִ� ũ�⿡ ���� ��ũ�� ����� ���Ե� ��� ����
int main(void)
{
	// unsigned int�� ���� �� �ִ� �ִ밪 4294967295 �� �ʰ��� ���
	unsigned int u_int_max = UINT_MAX + 1; // ���� ��� : 4294967295 + 1 = 4294967296
	printf("%u\n", u_int_max); // ���� ��� : 0

	return 0;
}