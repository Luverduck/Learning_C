// 10.13 �������� �迭�� 2���� �迭

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 2���� �迭 ����
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	// 2���� �迭�� �����ͷ� ������ 1���� �迭
	int* ptr_arr0 = arr[0];
	int* ptr_arr1 = arr[1];

	// �����ͷ� ������ 1���� �迭�� �ε��� ����
	// ptr_arr0[i] = *(ptr_arr0 + i) = *(&ptr_arr0[0] + i)
	for (int i = 0; i < 3; ++i) {
		printf("%d (= %d, %d)\n", ptr_arr0[i], *(ptr_arr0 + i), *(&ptr_arr0[0] + i));
	}

	printf("\n");

	for (int i = 0; i < 3; ++i) {
		printf("%d (= %d, %d)\n", ptr_arr1[i], *(ptr_arr1 + i), *(&ptr_arr1[0] + i));
	}

	return 0;
}