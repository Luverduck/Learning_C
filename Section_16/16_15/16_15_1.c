// 16.15 assert ���̺귯��
/*
	assert.h
	C ����� ǥ�� ���̺귯����, assert ��ũ�θ� �����ϴ� ��� ����

	assert.h�� ���Ե� ��ũ��
	assert( expression ) : ǥ������ ����� false�̸� ���� �����Ѵ�.
	- ����� ��忡���� �����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>

int divide(int a, int b)
{
	// ������ �߻��� �� �ִ� �κп� assert ��ũ�θ� ����Ѵ�.
	assert(b != 0);
	// if (b == 0) {
	// 	 printf("Can't divide\n");
	// 	 exit(1);
	// }

	return a / b;
}

int main(void)
{
	// a���� b�� ������ ����
	int a, b;

	int f = scanf("%d %d", &a, &b);

	printf("a / b = %d\n", divide(a, b));

	return 0;
}