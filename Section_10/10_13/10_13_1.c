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
	// arr_ptr[j][i] = *( arr_ptr[j] + i ) = *( *(arr_ptr + j) + i )
	for (int j = 0; j < 2; ++j)	{
		for (int i = 0; i < 3; ++i) {
			printf("%d(==%d, %d)\n", arr_ptr[j][i], *( arr_ptr[j] + i ), *( *(arr_ptr + j) + i) );
		}
	}

	return 0;
}