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

	// ii) �����͸� �տ� const�� ���̴� ���
	int* const ptr_ii = arr;
	
	// - �����Ͱ� ����Ű�� �޸��� ���� ������ �� ����. (�������� ���� �� ���� �Ұ���)
	*ptr_ii = 9; // ����
	ptr_ii[2] = 4; // ����

	// - �����Ϳ� ����� �ּҰ��� ������ �� ����.
	//ptr_ii++; // �Ұ���
	//ptr_ii = ptr_ii + 1; // �Ұ���

	printf("%d %d %d\n", arr[0], arr[1], arr[2]); // ��� : 9 2 4

	return 0;
}