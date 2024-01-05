// 12.13 �޸� ���� �Ҵ�
/*
	���� �Ҵ� �޸� (Dynamic Allocated Memory)
	��Ÿ�� �� ������� ��û�� ���� � ü���κ��� �Ҵ� �޴� �޸�
	- Heap ������ ����Ǹ� ����ڰ� ���� �Ҵ� �����ؾ� �Ѵ�.
*/

#include <stdio.h> // malloc(), calloc(), realloc(), free()
int main(void)
{
	// malloc �Լ�(Memory Allocation)
	// ��Ÿ�� �� � ü���κ��� �޸𸮸� �Ҵ� �޴´�.
	// void* malloc(size_t size);
	// - size : �Ҵ��� �޸��� ũ��
	// - [return] void* : �Ҵ�� �޸��� �ּ�

	// malloc �Լ� ��� ����
	// int�� 20�� ũ���� �޸𸮸� �Ҵ��� �� �� �ּ� int*�� �� ��ȯ�Ͽ� ptr�� �����Ѵ�.
	int* ptr = NULL;
	ptr = (int*)malloc(20 * sizeof(int));

	return 0;
}