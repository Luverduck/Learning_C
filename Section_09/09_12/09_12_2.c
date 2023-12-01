// 9.12 �������� �۵� ����
/*
	������(pointer)
	�޸��� �ּҸ� ������ �� �ִ� �ڷ���

	�ּ� ������ &
	������ �Ҵ�� �޸� ������ ���� �ּҸ� ��ȯ�Ѵ�.
	��ȯ�� �ּҰ��� ũ��� �ü���� ��Ʈ ���� ���� �ٸ���.
	- 64bit �ü�� : 8[byte](=64[bit]) ũ���� �ּ� ��ȯ
	- 32bit �ü�� : 4[byte](=32[bit]) ũ���� �ּ� ��ȯ

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

	// �ּ� ������ &
	printf("address of variabl = %p\n", &a);
	printf("value of pointer = %p\n", a_ptr);
	printf("address of pointer = %p\n", &a_ptr);

	return 0;
}