// 9.13 �������� �⺻���� ��� ���

#include <stdio.h>
int main(void)
{
	// 1. �������� ����

	// ���� ���� �� �ʱ�ȭ
	int a;
	a = 123;

	// �������� ����
	int* a_ptr;

	// �����Ϳ� ���� a�� �ּҸ� ����
	a_ptr = &a;

	printf("%d %d %p\n", a, *a_ptr, a_ptr);

	return 0;
}