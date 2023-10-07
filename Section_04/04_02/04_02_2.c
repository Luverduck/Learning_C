// 4.2 sizeof ������
/*
	�迭�� sizeof ����
	������ �����ϴ� �迭�� �޸� ũ�Ⱑ ��ȯ�ȴ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // �޸� �����Ҵ� �Լ� malloc()�� ���Ե� ���̺귯��
int main()
{
	// �迭�� sizeof ����
	int array_int[30];
	size_t size_array = sizeof array_int;
	printf("%u\n", size_array); // ��� : 120

	// ������ �����ϴ� �迭�� �ּ�
	// �迭�� ��Ÿ���� ������ ����� ���� �迭�� ù ��° ����� ���� ����� �ּ��̴�.
	// ���� �迭�� sizeof ���� ����� �ش� �ּ� ���� ���̶�� ������ �� ������
	// ���� �迭�� sizeof ���� ����� ������ �����ϴ� �迭�� �޸� ũ���̴�.
	// ������ ����� ��(�ּ�)�� ���� ����ϴ� ����� ������ ����.
	printf("%p\n", array_int);
	printf("%p\n", &array_int); // &array_int = &array_int[0]
	printf("%p\n", &array_int[0]);

	// �迭�� ���� �Ҵ�
	// �迭�� 0��° ����� �ּҸ� ������ ������ ���� ���� �� �ʱ�ȭ
	int* int_ptr = NULL;
	// ��Ÿ���� �� int�� �޸� 30���� �Ҵ��� �� 0��° ����� �ּҸ� ������ ������ ����
	int_ptr = (int*)malloc(sizeof(int) * 30);
};