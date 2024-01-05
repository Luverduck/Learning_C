// 12.13 �޸� ���� �Ҵ�
/*
	���� �Ҵ� �޸� (Dynamic Allocated Memory)
	��Ÿ�� �� ������� ��û�� ���� � ü���κ��� �Ҵ� �޴� �޸�
	- Heap ������ ����Ǹ� ����ڰ� ���� �Ҵ� �����ؾ� �Ѵ�.
*/

#include <stdio.h> // malloc(), calloc(), realloc(), free()
int main(void)
{
	// free �Լ�
	// ��Ÿ�� �� � ü���κ��� �Ҵ���� �޸𸮸� �����Ѵ�.
	// void free(void *ptr);
	// - ptr : �Ҵ� ������ �޸��� �ּ�

	// free �Լ� ��� ����
	// int�� 20�� ũ���� �޸𸮸� �Ҵ��� �� �� �ּ� int*�� �� ��ȯ�Ͽ� ptr�� �����Ѵ�.
	int* ptr = NULL;
	ptr = (int*)malloc(20 * sizeof(int));
	free(ptr);

	return 0;
}