// 12.16 calloc(), realloc()
/*
	realloc �Լ�
	��Ÿ�� �� � ü���κ��� �̹� �Ҵ�� �޸𸮸� �ݳ��ϰ� ���Ҵ� �޴´�.
	void *realloc( void *ptr, size_t size );
	- ptr : �Ҵ��� �޸��� ����
	- size : �޸� �ϳ��� ũ��
	- [return] void* : �Ҵ�� �޸��� �ּ�
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// realloc �Լ� ��� ����

	// �Ҵ��� �޸��� ����
	int n = 10;

	// 0���� �ʱ�ȭ�� int�� �޸� 20���� �Ҵ��� �� �� �޸� �ּҸ� ptr�� ����
	int* ptr = NULL;
	ptr = (int*)calloc(n, sizeof(int));

	// ���� �Ҵ翡 ������ ��� ���α׷� ����
	if (ptr == NULL) exit(EXIT_FAILURE);

	// ���� �Ҵ� �޸��� �ʱ�ȭ
	for (int i = 0; i < n; ++i)
	{
		ptr[i] = i;
	};

	// ���� �Ҵ� �޸𸮿� ����� �� ���
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", ptr[i]);
	};

	printf("\n");

	// ���Ҵ��� �޸��� ����
	n = 5;

	// ���� �Ҵ� �޸��� ���Ҵ�
	int* ptr_re = NULL;
	ptr_re = (int*)realloc(ptr, n * sizeof(int));

	// ���� �Ҵ翡 ������ ��� ���α׷� ����
	if (ptr_re == NULL) exit(EXIT_FAILURE);

	// ���� �Ҵ� �޸𸮿� ����� �� ���
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", ptr_re[i]);
	};

	return 0;
}