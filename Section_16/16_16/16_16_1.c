// 16.16 memcpy()�� memmove()
/*
	memcpy �Լ�
	�ҽ� �޸𸮸� �ӽ� ���ۿ� �������� �ʰ� �ٷ� ������ �޸𸮿� �����Ѵ�.
	void *memcpy( void *dest, const void *src, size_t count );
	- dest : ������ �ҽ��� ������ ������ �޸��� �ּ�
	- src : ������ �ҽ� �޸��� �ּ�
	- count : ������ �޸��� [byte]
	- [return] void* : ������ �޸��� �ּ�

	memmove �Լ�
	�ҽ� �޸𸮸� �ӽ� ���ۿ� ������ �� �ӽ� ���۸� ������ �޸𸮿� �����Ѵ�.
	void *memmove( void *dest, const void *src, size_t count );
	- dest : ������ �ҽ��� ������ ������ �޸��� �ּ�
	- src : ������ �ҽ� �޸��� �ּ�
	- count : ������ �޸��� [byte]
	- [return] void* : ������ �޸��� �ּ�
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // memcpy(), memmove()

void print_array(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(void)
{
	// src �迭 ����
	int src[6] = { 0, 1, 2, 3, 4, 5 };
	
	// memcpy �Լ� ����
	// i) ���� �޸� �ּҿ��� ���� �޸� �ּҷ� ������ ��� => ���� ����
	//memcpy(src, &src[2], sizeof(int) * 4);
	// ii) ���� �޸� �ּҿ��� ���� �޸� �ּҷ� �����ϴ� ��� => ������ ����
	memcpy(&src[2], src, sizeof(int) * 4);

	// dest �迭 ���
	print_array(src, 6);

	return 0;
}