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

	// �迭�� 1��° ��� �޸𸮸� ����Ű�� �迭 ������ ����
	int* ptr = arr + 1; // ptr = arr + 1 = &arr[0] + 1 = &arr[1] = 000000FE458FF6A9

	// �迭 �����Ϳ� ������ ����/����
	// ptr + n = arr + n = &arr[1] + n = &arr[n + 1]

	printf("%p %p\n", ptr + 1, arr + 2);
	// ��� : 000000FE458FF6A9 000000FE458FF6A9

	printf("%d %d\n", *(ptr + 1), *(arr + 2));
	// ��� : 300 300

	return 0;
}