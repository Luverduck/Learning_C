// 10.14 2���� �迭�� ������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// �迭 �������� ������
	// �������� ����� �迭�� ������

	// 2���� �迭 ����
	int arr_2d[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };

	// int (*)[3] : int�� 3���� ��ҷ� ���� �迭�� ����Ű�� ������ (�迭�� ������)
	int(*ptr_of_arr)[3] = NULL;  // �ڷ��� : int (*)[3]

	// �ʱ�ȭ
	ptr_of_arr = arr_2d; // �ڷ��� : int (*)[3]
	ptr_of_arr = &arr_2d[0];     // �ڷ��� : int (*)[3]
	ptr_of_arr = &arr_2d[1];     // �ڷ��� : int (*)[3]

	return 0;
}