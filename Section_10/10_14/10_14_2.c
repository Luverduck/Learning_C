// 10.14 2���� �迭�� ������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// �迭 �������� ������
	// �������� ����� �迭�� ���� �޸� �ּ��� ������
	
	// 2���� �迭 ����
	int arr_2d[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
	
	// int *[2] : int���� ����Ű�� ������ 2���� ��ҷ� ���� �迭 (�������� �迭)
	int* arr_of_ptr[2] = NULL;   // �ڷ��� : int *[2]
	
	// ������ �迭�� �� ��Ҹ� 2���� �迭�� �� ��� �ּҷ� �ʱ�ȭ
	arr_of_ptr[0] = arr_2d[0];   // �ڷ��� : int *
	arr_of_ptr[1] = arr_2d[1];   // �ڷ��� : int *

	return 0;
}