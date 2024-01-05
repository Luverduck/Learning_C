// 12.13 �޸� ���� �Ҵ�
/*
	���� �Ҵ� �޸� (Dynamic Allocated Memory)
	��Ÿ�� �� ������� ��û�� ���� � ü���κ��� �Ҵ� �޴� �޸�
	- Heap ������ ����Ǹ� ����ڰ� ���� �Ҵ� �����ؾ� �Ѵ�.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// �޸� ���� �Ҵ�
	int* ptr = NULL;
	ptr = (int*)malloc(30 * sizeof(int));

	// ���� �Ҵ翡 �����ϸ�
	if (ptr == NULL) {
		// �Ҵ� ���� ���
		puts("Memory allocation failed");
		// 1�� ��ȯ�ϰ� ���α׷��� ���� (return 1)
		exit(EXIT_FAILURE);
	}

	// ���� �޸� �Ҵ� ���� �� �޸� �ּ�
	printf("Before free %p\n", ptr);
	// ���� �޸� �Ҵ� ����
	free(ptr);
	// ���� �޸� �Ҵ� ���� �� �޸� �ּ�
	printf("After free %p\n", ptr);

	return 0;
}