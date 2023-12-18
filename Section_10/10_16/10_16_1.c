// 10.16 ������ �迭�� �Լ��� �����ϴ� ���

#include <stdio.h>

// ��ȣ�� ��� (symbolic constant)
#define ROWS 3
#define COLS 4

int main(void)
{
	// 2���� �迭
	int arr_2d[ROWS][COLS] = {
								{ 1, 2, 3, 4 },
								{ 5, 6, 7, 8 },
								{ 9, 0, 1, 2 }
												};

	// 2���� �迭 arr_2d�� (2, 3) ���
	// 1) array subscripting operator []
	printf("%d\n", arr_2d[2][3]);

	// 2) pointer arithmetic
	int* ptr_arr_2d = &arr_2d[0][0];
	printf("%d\n", *( ptr_arr_2d + 3 + COLS * 2 ));
	// ptr_arr_2d + 3 �� ���� 0������ 3���� �̵�
	// COLS * 2 �� ���� 0�࿡�� 2������ �� �̵�

	return 0;
}