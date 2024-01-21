// 14.11 ���༺ �ִ� �迭 ���
/*
	���༺ �ִ� �迭 ��� (Flexible Array Member)
	����ü�� ������ ����� ����� ���̰� �������� ���� �迭
	�ش� �迭 ����� ���� �Ҵ��� ���� ���̸� �����Ӱ� ������ �� �ִ�.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct Flexible
	{
		size_t count;
		double average;
		double* values; // pointer
	};

	// ���� �Ҵ� �޸� ����
	const size_t n = 3;

	// ����ü ���� ����
	struct Flexible ptr_flexible;

	// ����ü ������ ��� ���� �Ҵ�
	ptr_flexible.values = (double*)malloc(sizeof(double) * n);

	return 0;
}