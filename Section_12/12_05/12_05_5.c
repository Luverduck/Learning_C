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

int main(void)
{
	// �ڵ� ������ Ư¡

	// 4. ����� ���� ��� �ڵ� ������ ������ ����(Statement)�� ���ۺ��� ������ ��(;)������ �ȴ�.
	for (int i = 0; i < 10; ++i)
		printf("%d\n", i);

	return 0;
}