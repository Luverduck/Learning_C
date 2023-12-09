// 10.4 �����Ϳ� �迭

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// ���� 4�� int�� �迭 ����
	int arr[4];
	int num = sizeof(arr) / sizeof(int);

	// �迭�� ��� �ʱ�ȭ
	for (int i = 0; i < num; ++i) {
		arr[i] = (i + 1) * 100;
	};

	// �迭�� 0��° ��� �޸𸮸� ����Ű�� �迭 ������ ����
	int* ptr = arr; // ptr = arr = &arr[0] = 000000FE458FF6A5

	// �迭 �����Ϳ� ������ ����/����
	// ptr + n = arr + n = &arr[0] + n = &arr[n]

	printf("%p %p\n", ptr + 2, arr + 2);
	// ��� : 000000FE458FF6AD 000000FE458FF6AD

	printf("%d %d\n", *(ptr + 2), *(arr + 2));
	// ��� : 200 200

	return 0;
}