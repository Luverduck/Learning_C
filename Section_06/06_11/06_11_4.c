// 6.11 �޸� ������
/*
	�޸� ������ (Comma Operator)
	�ϳ� �̻��� �ǿ����� �Ǵ� ǥ���ĵ��� �����ϴ� ������
	- ù ��° �ǿ����� �Ǵ� ǥ������ ���� ��, �� ���� �ǿ����� �Ǵ� ǥ������ ���Ѵ�.
	- �� ���̿� ������ ����Ʈ�� �ִ�.

	�޸� �������� ����(Associativity)
	�޸� �����ڴ� ���ʿ��� ������ �������� �����Ѵ�.
*/

#include <stdio.h>
int main(void)
{
	int my_money = (123, 456);
	printf("%d\n", my_money);

	return 0;
}