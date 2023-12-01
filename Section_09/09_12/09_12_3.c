// 9.12 �������� �۵� ����
/*
	������(pointer)
	�޸��� �ּҸ� ������ �� �ִ� �ڷ���

	�ּ� ������ &
	������ �Ҵ�� �޸� ������ ���� �ּҸ� ��ȯ�Ѵ�.

	������ ������ *
	�����Ϳ� ����� �ּҷ� �޸� ������ �����Ѵ�.
	�ּҸ� ���� �޸� ������ �����ϴ� ����
	������(dereferencing), ���� ����(indirection) �Ǵ� ���� ������(redirection)�̶� �θ���.
*/

#include <stdio.h>
int main(void)
{
	int a = 7;

	// �������� ����
	int* a_ptr;

	// �����Ϳ� ���� a�� �ּҸ� ����
	a_ptr = &a;

	// ������ ������ *
	printf("value of variable = %d\n", a);
	printf("value of pointing = %d\n", *a_ptr);

	return 0;
}