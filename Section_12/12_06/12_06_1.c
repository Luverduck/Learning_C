// 12.6 �������� ����
/*
	�������� ���� (Register Variable)
	Register Storage Class�� ���ϴ� ����
	- ���� �ð� : automatic
	- ���� ���� : block
	- ���� ���� : none
	- ���� ��ġ : ��������(Register) �Ǵ� ����(Stack)
*/

#include <stdio.h>
int main(void)
{
	// �������� ������ Ư¡

	// 1. register Ű����� �����Ѵ�. 
	register int r;
	r = 123;

	// 2. �������� ������ �޸� �ּҸ� �� �� ����.
	//printf("%p\n", &r); // Error

	return 0;
}