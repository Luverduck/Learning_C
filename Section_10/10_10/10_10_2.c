// 10.10 const�� �迭�� ������
/*
	�� ������ const
	������ ����� �����ϱ� ���� ������, const�� ���� ������ �� ��(value)�� �ٲ� �� ����.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// const�� ������ �迭
	// - �迭 ����� ���� ������ �� ����. (��, �����͸� �̿��� ��� �迭 ����� ���� ������ �� �ִ�.)
	const int arr[] = { 1, 2, 3 };
	//arr[2] = 4; // �Ұ���

	int* ptr = arr;
	*ptr = 9;     // ����
	ptr[2] = 4;   // ����

	printf("%d %d %d", arr[0], arr[1], arr[2]); // ��� : 9 2 4

	return 0;
}