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
	// 3���� �迭�� ���� �Ҵ�

	// ��(row), ��(column), ����(depth) ����
	int row = 2, col = 3, depth = 2;

	// ���� �Ҵ� �޸��� �ּҸ� ������ ������
	int* ptr_3d = NULL;

	// int�� �޸� (row * col)���� �Ҵ��� �� �� �޸� �ּҸ� ptr_3d�� ����
	ptr_3d = (int*)malloc(sizeof(int) * row * col * depth);

	// ���� �Ҵ翡 ������ ��� ���α׷� ����
	if (ptr_3d == NULL) exit(EXIT_FAILURE);

	// 3���� �迭�� ��� �ʱ�ȭ
	for (int i = 0; i < depth; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			for (int k = 0; k < col; ++k)
			{
				ptr_3d[(row * col) * i + col * j + k] = (row * col) * i + col * j + k;
			}
		}
	};

	// 3���� �迭�� ��� ���
	for (int i = 0; i < depth; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			for (int k = 0; k < col; ++k)
			{
				printf("%d ", ptr_3d[(row * col) * i + col * j + k]);
			}
			printf("\n");
		}
		printf("\n");
	};

	// ptr_3d�� ����� �ּ��� �޸𸮸� �Ҵ� ����
	free(ptr_3d);

	// ptr_3d�� ����� �ּҸ� NULL�� �ʱ�ȭ
	ptr_3d = NULL;

	return 0;
}