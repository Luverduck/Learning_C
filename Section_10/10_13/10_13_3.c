// 10.13 �������� �迭�� 2���� �迭

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 2���� �迭 ����
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	// 2���� �迭�� ������ �迭�� ������ 2���� �迭
	int* arr_ptr[2];
	arr_ptr[0] = arr[0];
	arr_ptr[1] = arr[1];


	// ������ �迭�� ������ 2���� �迭�� �ε��� ����
	// arr_ptr[i][j] = *( arr_ptr[i] + j ) = *( *(arr_ptr + i) + j ) = *( arr_ptr + i )[j];
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			printf("%d(==%d, %d)\n", arr_ptr[i][j], *(arr_ptr[i] + j), *(*(arr_ptr + i) + j));
		}
	}

	printf("%p\n", arr_ptr);
	printf("%p\n", &arr_ptr[0]);
	printf("%p\n", arr_ptr[0]);
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", arr[0]);
	printf("%p\n", &arr[0][0]);

	return 0;
}