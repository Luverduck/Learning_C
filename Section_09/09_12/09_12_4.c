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

	// [�߰�] ������ �����ڸ� �̿��Ͽ� �޸𸮿� ����� ���� ���� ����
	// ���� �� ������ �Ҵ�� �޸��� �ּҿ� �ش� �޸𸮿� ����� ��
	printf("before value of variable address = %p\n", a_ptr);
	printf("before value of variable = %d\n", a);

	// ������ �Ҵ�� �޸𸮿� ����� �� ����
	*a_ptr = 9;

	// ���� �� ������ �Ҵ�� �޸��� �ּҿ� �ش� �޸𸮿� ����� ��
	printf("after value of variable address = %p\n", a_ptr);
	printf("after value of variable = %d\n", a);

	return 0;
}