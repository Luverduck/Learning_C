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
	// arr_ptr[j][i] = *(arr_ptr[j] + i) = *(*(arr_ptr + j) + i) = *(arr_ptr + j)[i] 
	for (int j = 0; j < 2; ++j) {
		for (int i = 0; i < 3; ++i) {
			printf("%d(==%d, %d)\n", arr_ptr[j][i], *(arr_ptr[j] + i), *(*(arr_ptr + j) + i));
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