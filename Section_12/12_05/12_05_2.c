// 12.5 �ڵ� ����
/*
	�ڵ� ���� (Automatic Variable)
	Automatic Storage Class�� ���ϴ� ����
	- ���� �ð� : automatic
	- ���� ���� : block
	- ���� ���� : none
	- ���� ��ġ : ����(Stack)
*/

#include <stdio.h>

void func()
{
	int i = 0;
	printf("%d\n", i);
	i++;
};

int main(void)
{
	// �ڵ� ������ Ư¡

	// 1. ������ ���� ����� ������ �ڵ����� �޸𸮸� �����Ѵ�. (automatic storage duration)
	func(); // ��� : 0
	func(); // ��� : 0

	return 0;
};