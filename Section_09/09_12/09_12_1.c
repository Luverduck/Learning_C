// 9.12 �������� �۵� ����
/*
	������(pointer)
	�޸��� �ּҸ� ������ �� �ִ� �ڷ���

	�������� ����
	[����Ű�� ���� �ڷ���]* [�����͸�];
	int* a_ptr;
*/

#include <stdio.h>
int main(void)
{
	// �������� ����
	int* a_ptr;

	// �����Ϳ� ������ �ּ� ����
	int a = 7;
	a_ptr = &a; // �ּ� ������ &�� ������ �Ҵ�� �޸� ������ ���� �ּҸ� ��ȯ�Ѵ�.
	printf("value of variable = %d\n", a);
	printf("address of variable = %p\n", &a);
	printf("value of pointer = %p\n", a_ptr);

	return 0;
}