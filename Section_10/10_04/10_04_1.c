// 10.4 �����Ϳ� �迭

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// ���� 4�� int�� �迭 ����
	int arr[4];
	int num = sizeof(arr) / sizeof(int);

	// �迭�� ��Ҹ� 100, 200, 300, 400���� �ʱ�ȭ
	for (int i = 0; i < num; ++i) {
		arr[i] = (i + 1) * 100;
	};

	// �迭�� ���� �ּ� ����
	int* ptr = arr;

	// ptr = arr = &arr[0]
	printf("%p %p %p\n", ptr, arr, &arr[0]);

	ptr += 2;

	// ptr + 2 = arr + 2 = &arr[2]
	printf("%p %p %p\n", ptr, arr + 2, &arr[2]);

	return 0;
}