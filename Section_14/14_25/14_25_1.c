// 14.25 qsort �Լ� ������ ���� ����
/*
	qsort �Լ�
	void qsort(	void* arr, size_t lenth, size_t size, int (*compare)(const void*, const void*) );
	- arr : ������ �迭�� �ּ�
	- lenth : ������ �迭�� ����
	- size : ������ �迭 ����� ũ��[Byte]
	- compare : �� ��Ҹ� ���Ͽ� ���踦 �����ϴ� ���� ��ȯ�ϴ� �Լ� ������
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> // qsort()

// �� ����� ���踦 ��ȯ�ϴ� �Լ�
int compare(const void* first, const void* second)
{
	// void* �� int*�� �� ��ȯ �� ������
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int main(void)
{
	// �迭 ����
	int arr[] = { 8, 2, 5, 3, 6, 11 };
	// �迭�� ����
	int n = sizeof(arr) / sizeof(arr[0]);

	// �� ����
	qsort(arr, n, sizeof(int), &compare);

	// ���� �� �迭�� ��� ���
	for (int i = 0; i < n; ++i)
		printf("%d ", arr[i]);

	return 0;
}