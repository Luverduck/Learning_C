// 10.10 const�� �迭�� ������
/*
	�� ������ const
	������ ����� �����ϱ� ���� ������, const�� ���� ������ �� ��(value)�� �ٲ� �� ����.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// const�� ������ ������
	const int arr[] = { 1, 2, 3 };

	// ii) ���������� �����͸� �տ� const�� ���̴� ���
	const int* const ptr_ii = arr;

	// - �����Ͱ� ����Ű�� �޸��� ���� ������ �� ����. (�������� ���� �� ���� �Ұ���)
	// *ptr_ii = 9; // �Ұ���
	// ptr_ii[2] = 4; // �Ұ���

	// - �����Ϳ� ����� �ּҰ��� ������ �� ����.
	//ptr_ii++; // �Ұ���
	//ptr_ii = ptr_ii + 1; // �Ұ���

	return 0;
}