// 10.5 2���� �迭�� �޸�
/*
	2���� �迭�� �޸�
	2���� �迭�� 1���� �迭 ���� ���� ���������� ����� �����̴�.
*/

#include <stdio.h>
int main(void)
{
	int arr[2][3] = { {0, 1, 2}, {3, 4, 5} };

	// 2���� �迭�� ��� ��� ���
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
		for (int j = 0; j < sizeof(arr[0]) / sizeof(int); ++j) {
			printf("arr[%d][%d] = %d, &arr[%d][%d] = %p\n", i, j, arr[i][j], j, i, &arr[i][j]);
		};
	};

	return 0;
}