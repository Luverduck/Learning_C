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

struct Kid
{
	char name[100];
	int height;
};

// TO DO : �� ����� ���踦 ��ȯ�ϴ� �Լ� ����
int compare(const void* first, const void* second);

int main(void)
{
	// ����ü�� �迭 ����
	struct Kid my_friends[] = {
		"Jack Jack", 40, "Genie", 300, "Aladin", 170, "Piona", 150
	};

	// �迭�� ����
	const int n = sizeof(my_friends) / sizeof(struct Kid);

	// �� ����
	qsort(my_friends, n, sizeof(struct Kid), compare);

	// ���� �� �迭�� ��� ���
	for (int i = 0; i < n; ++i)
		printf("%s     \t%d\n", my_friends[i].name, my_friends[i].height);

	return 0;
}

// TO DO : �� ����� ���踦 ��ȯ�ϴ� �Լ� ����
int compare(const void* first, const void* second)
{
	// void* �� sturct Kid*�� �� ��ȯ
	if (((struct Kid*)first)->height > ((struct Kid*)second)->height)
		return 1;
	else if (((struct Kid*)first)->height < ((struct Kid*)second)->height)
		return -1;
	else
		return 0;
};