// 6.16 �迭�� ��Ÿ�� ����
/*
	�迭(Array)
	���� �ڷ����� ��ҵ�� �̷���� �ڷ� ����
	���ӵ� �ּ��� �޸� ������ �Ҵ�
	�ε���(index)�� ���� �迭�� Ư�� ��ġ�� �ִ� ��ҿ� ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// �迭�� �ε���
	int array_int[3] = { 1, 3, 4 };

	// �迭�� �ε��� ������ ������ []�� �̿��Ͽ� �迭 array_int�� n��° ����� ���� ����
	printf("%d", array_int[0]); // ��� : 1
	printf("%d", array_int[1]); // ��� : 3
	printf("%d", array_int[2]); // ��� : 4

	// �迭 ������ �迭�� 0��° ��� ���� ����� �޸� ������ ���� �ּ� ���
	printf("%p\n", array_int);     // ��� : 000000B8FD8FF908
	printf("%p\n", &array_int[0]); // ��� : 000000B8FD8FF908 => array_int = &array_int[0]

	return 0;
}