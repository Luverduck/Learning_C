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

	// �迭 �������� �ε��� ����
	// ptr[n] = *(ptr + n)

	// �迭�� 0��° ��� �޸𸮸� ����Ű�� �迭 ������ ����
	int* ptr_0 = arr; // ptr = arr = &arr[0] = 000000FE458FF6A5

	// ���� ��ҷκ��� 3��° ���� ����� ���� ����
	printf("%p %d\n", &ptr_0[3], ptr_0[3]); // ��� : 000000FE458FF6B1 400

	// �迭�� 1��° ��� �޸𸮸� ����Ű�� �迭 ������ ����
	int* ptr_1 = arr + 1; // ptr = arr + 1 = &arr[0] + 1 = &arr[1] = 000000FE458FF6A9

	// ���� ��ҷκ��� 2��° ���� ����� ���� ����
	printf("%p %d\n", &ptr_1[2], ptr_1[2]); // ��� : 000000FE458FF6B1 400

	return 0;
}