// 12.16 calloc(), realloc()
/*
	calloc �Լ�
	��Ÿ�� �� � ü���κ��� ���� 0���� �ʱ�ȭ�� �޸𸮸� �Ҵ� �޴´�.
	void *calloc( size_t n, size_t size );
	- n : �Ҵ��� �޸��� ����
	- size : �޸� �ϳ��� ũ��
	- [return] void* : �Ҵ�� �޸��� �ּ�
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// calloc �Լ� ��� ����

	// �Ҵ��� �޸��� ����
	int n = 10;

	// 0���� �ʱ�ȭ�� int�� �޸� 20���� �Ҵ��� �� �� �޸� �ּҸ� ptr�� ����
	int* ptr = NULL;
	ptr = (int*)calloc(n, sizeof(int));

	// ���� �Ҵ翡 ������ ��� ���α׷� ����
	if (ptr == NULL) exit(EXIT_FAILURE);

	// ���� �Ҵ� �޸𸮿� ����� �� ���
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", ptr[i]);
	};

	return 0;
}