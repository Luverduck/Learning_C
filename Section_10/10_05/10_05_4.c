// 10.5 2���� �迭�� �޸�
/*
	2���� �迭�� �޸�
	2���� �迭�� 1���� �迭 ���� ���� ���������� ����� �����̴�.
*/

#include <stdio.h>
int main(void)
{
	int arr[2][3] = { {0, 1, 2}, {3, 4, 5} };

	// 2���� �迭�� ��� ��� ��� (������ ���)
	int* ptr = arr;
	for (int j = 0; j < sizeof(arr) / sizeof(int); ++j) {
		printf("%d\n", *(ptr + j));
	};

	return 0;
}