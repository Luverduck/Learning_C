// 10.3 �������� ��� ����
/*
	�����Ϳ� �������� ����
	�����Ϳ� ������ ����/�������κ��� �����Ϳ� �������� ������ ����� �������� �� �� �ִ�.
	�� �������� ���� ���(����)�� �� ������ ������ ������ �ǹ��Ѵ�.
*/

#include <stdio.h>
int main(void)
{
	int arr[4];

	int* ptr_0 = &arr[0];
	int* ptr_2 = &arr[2];
	printf("&arr[0] = %p\n", ptr_0);
	printf("&arr[2] = %p\n", ptr_2);

	int diff = ptr_2 - ptr_0;
	printf("&arr[2] - &arr[0] = %d\n", diff);

	return 0;
}