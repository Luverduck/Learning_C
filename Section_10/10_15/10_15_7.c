// 10.15 �������� ȣȯ��
/*
	�������� ȣȯ�� ���� �������
	���������� ����ϴ� ����������� �������� �ʴ´�.
*/

#include <stdio.h>
int main(void)
{
	// ���� �����Ϳ� const

	// ����
	int x = 5;
	int y = 10;

	// ������
	int* ptr_x = &x;
	int* ptr_y = &y;

	// ���� ������
	const int** dptr = &ptr_x;
	// const int** dptr �� ��� : �������� ���� const
	// int** const dptr �� ��� : dptr�� ���� const
	// const int** const dptr �� ��� : �������� ���� const�̸鼭 dptr�� ���� const

	// const�� ���� �������� �� ����
	*dptr = ptr_y;
	dptr = &ptr_x; // const int** dptr �� ��� �������� ���� const�̸� dptr�� ���� �ٲ� �� �ִ�.

	return 0;
}