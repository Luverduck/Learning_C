// 10.15 �������� ȣȯ��
/*
	�������� ȣȯ�� ���� �������
	���������� ����ϴ� ����������� �������� �ʴ´�.
*/

#include <stdio.h>
int main(void)
{
	// 2���� �迭�� ���� ������

	// 2���� �迭
	int arr_2d[2][3] = { { 1, 2, 3}, { 4, 5, 6 } };

	// ������
	int* ptr;

	// ���� ������
	int** dptr;

	// ���� �����Ϳ� 2���� �迭�� ���� �޸� �ּ� ����
	dptr = &ptr;
	*dptr = arr_2d[0];
	dptr = arr_2d; // int * != int *[3]�̹Ƿ� Warning

	return 0;
}