// 12.14 �޸� ������ free()�� �߿伺
/*
	�޸� ����(leak)
	���α׷��� �� �̻� �ʿ����� ���� �޸𸮸� �����ϰ� �ִ� ����
	�޸� ������ �����ϱ� ���ؼ��� �ݵ�� `free()`�� ����� ���� �޸𸮸� �Ҵ� �����ؾ� �Ѵ�.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Debugging�� ���� Dummy Output
	printf("Dummy Output\n");

	{
		// �޸� ���� �Ҵ�
		int n = 100000000;
		int* ptr = (int*)malloc(n * sizeof(int));

		// ���� �Ҵ翡 ������ ���
		if (ptr == NULL)
		{
			printf("Memory Allocation Failed\n");
			exit(EXIT_FAILURE); // EXIT_FAILURE�� ��ȯ�� �� ���α׷� ����
		}

		// ���� �Ҵ� �޸� �ʱ�ȭ
		for (int i = 0; i < n; ++i)
			ptr[i] = i + 1;

		// ���� �Ҵ� �޸� ����
		free(ptr);
	}

	// Debugging�� ���� Dummy Output
	printf("Dummy Output\n");

	return 0;
}