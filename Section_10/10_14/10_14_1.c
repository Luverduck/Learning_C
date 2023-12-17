// 10.14 2���� �迭�� ������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 2���� �迭�� �������� ����

	// 2���� �迭 ����
	int arr_2d[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };

	// �޸� �ּ� ����
	// arr_2d == &arr_2d[0] == *arr_2d == arr_2d[0] == &arr_2d[0][0]
	// 1) arr_2d = &arr_2d[0];                  // �ڷ��� : int (*)[3]
	// 2) *arr_2d = arr_2d[0] = &arr_2d[0][0];  // �ڷ��� : int *
	printf("%p %p\n", arr_2d, &arr_2d[0]);
	printf("%p %p %p\n", *arr_2d, arr_2d[0], &arr_2d[0][0]);

	// &arr_2d[1] == arr_2d[1] == &arr_2d[1][0]
	printf("%p\n", &arr_2d[1]);
	printf("%p %p\n", arr_2d[1], &arr_2d[1][0]);

	// ������ ����
	// arr_2d[0][0] == **arr_2d                    // (0, 0) ��° ���
	printf("%d %d\n", arr_2d[0][0], **arr_2d);

	// arr_2d[j][i] == *(*(arr_2d + j) + i)        // (j, i) ��° ���
	printf("%d %d\n", arr_2d[1][2], *(*(arr_2d + 1) + 2));

	return 0;
}