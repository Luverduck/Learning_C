// 10.13 �������� �迭�� 2���� �迭

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 1���� �迭 ����
	int arr0[] = { 1, 2, 3 };
	int arr1[] = { 4, 5, 6 };

	// 1���� �迭�� ������ �迭�� ������ 2���� �迭
	int* arr_ptr[] = { arr0, arr1 };

	// ������ �迭�� ������ 2���� �迭�� �ε��� ����
	// arr_ptr[i][j] = *( arr_ptr[i] + j ) = *( *(arr_ptr + i) + j );
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			printf("%d(==%d, %d)\n", arr_ptr[i][j], *(arr_ptr[i] + j), *(*(arr_ptr + i) + j));
		}
	}

	return 0;
}