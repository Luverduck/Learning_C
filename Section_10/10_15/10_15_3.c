// 10.15 �������� ȣȯ��
/*
	�������� ȣȯ�� ���� �������
	���������� ����ϴ� ����������� �������� �ʴ´�.
*/

#include <stdio.h>
int main(void)
{
	// 2���� �迭�� ������

	// 2���� �迭
	int arr_2d[2][3] = { { 1, 2, 3}, { 4, 5, 6 } };
	// 0��° ��ҿ� ���Ͽ�
	// arr_2d = &arr_2d[0]                      ( int *[3] )
	// arr_2d = arr_2d[0] = &arr_2d[0][0]       ( int * )
	// 1��° ��ҿ� ���Ͽ�
	// &arr_2d[1]                               ( int *[3] )
	// arr_2d[1] == &arr_2d[1][0]               ( int * )

	// ptr_arr_1�� arr[0][1]�� �ּ� ����
	int* ptr_arr_1 = &arr_2d[0][1];

	// ptr_arr_2�� 1���� �迭 arr[1]�� �ּ� ����
	int* ptr_arr_2 = arr_2d[1];

	// ptr_arr_3�� 2���� �迭 arr�� �ּ� ���� 
	int* ptr_arr_3 = arr_2d; // int * != int (*)[3]�̹Ƿ� Warnings

	return 0;
}