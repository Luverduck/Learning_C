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
	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); ++j) {
		for (int i = 0; i < sizeof(arr[0]) / sizeof(int); ++i) {
			printf("arr[%d][%d] = %d, &arr[%d][%d] = %p\n", j, i, arr[j][i], j, i, &arr[j][i]);
		};
	};

	return 0;
}