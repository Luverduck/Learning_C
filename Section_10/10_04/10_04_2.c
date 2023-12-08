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

	// 2. �������� ����/������ �迭 ��� ������
	// �迭 �������� �ε��� ����� �迭�� Ư�� �ε��� ����� ���� ������ ���� ���� ������ �� �ִ�.
	// ptr[n] = *(ptr + n) = *(&ptr[0] + n)    

	printf("%p %d\n", &ptr[0], ptr[0]); // ��� : 000000FE458FF6A5 100
	printf("%p %d\n", &ptr[1], ptr[1]); // ��� : 000000FE458FF6A9 200
	printf("%p %d\n", &ptr[2], ptr[2]); // ��� : 000000FE458FF6AD 300
	printf("%p %d\n", &ptr[3], ptr[3]); // ��� : 000000FE458FF6B1 400

	return 0;
}