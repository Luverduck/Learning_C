// 12.15 ���� �Ҵ� �޸𸮸� �迭ó�� ����ϱ�
/*
	���� �Ҵ� �޸𸮿� �迭
	� ü���� �޸� ���� �Ҵ� ��û �� �������� �ּ��� �޸� ������ �Ҵ� �޴´�.
	���� �޸� ���� �Ҵ��� ���� �迭�� ������ �� �ִ�. (�迭�� �޸� ���� �������� �ּ� ������ ���´�.)
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 2���� �迭�� ���� �Ҵ�

	// ��(row), ��(column) ����
	int row = 2, col = 3;

	// ���� �Ҵ� �޸��� �ּҸ� ������ ������
	int* ptr_2d = NULL;

	// int�� �޸� (row * col)���� �Ҵ��� �� �� �޸� �ּҸ� ptr_2d�� ����
	ptr_2d = (int*)malloc(sizeof(int) * row * col);

	// ���� �Ҵ翡 ������ ��� ���α׷� ����
	if (ptr_2d == NULL) exit(EXIT_FAILURE);

	// 2���� �迭�� ��� �ʱ�ȭ
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			ptr_2d[col * i + j] = col * i + j;   // *(ptr_2d + col * i + j) = col * i + j;
		}
	};

	// 2���� �迭�� ��� ���
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("%d ", ptr_2d[col * i + j]);
		}
		printf("\n");
	};

	// ptr_2d�� ����� �ּ��� �޸𸮸� �Ҵ� ����
	free(ptr_2d);

	// ptr_2d�� ����� �ּҸ� NULL�� �ʱ�ȭ
	ptr_2d = NULL;

	return 0;
}