// 16.4 �Լ� ���� ��ũ��
/*
	�Լ� ���� ��ũ�� (Function-Like Macro)
	��ũ�� �μ��� ���� ��ũ�η� ���ǵ� ǥ������ ����� �����Ǵ� ��ũ��

	 �Լ� ���� ��ũ�θ� ����� �� ������ ��
	- ��ũ�� �μ��� ǥ������ �ۼ��� �� �μ��� �Ұ�ȣ ( )�� �����Ͽ� �����ؾ� �Ѵ�.
*/

#define SQUARE1(X) ((X)*(X))
#define SQUARE2(X) X*X

#include <stdio.h>
int main(void)
{
	// ǥ���� ������ �μ� �Է¿� ���� ����
	printf("%d\n", SQUARE1(1+3));
	// ��� : 16	= (1 + 3) * (1 + 3) = 4 * 4 = 16
	printf("%d\n", SQUARE2(1+3));
	// ��� : 7	= 1 + 3 * 1 + 3 = 1 + 3 + 3 = 7

	return 0;
}