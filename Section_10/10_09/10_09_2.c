// 10.9 ������ ���� �� ����
/*
	�迭 ������ ���� ������
	& : �� �����ڿ� �Ҵ�� �޸��� ���� �ּ� ��ȯ
	* : �� �����ڰ� ����Ű�� �޸𸮿� ����� �� ��ȯ(����)
	[ ] : �� �����ڰ� ����Ű�� �޸𸮷κ��� Ư�� �ε��� ��/���� �޸𸮿� ����� �� ��ȯ
*/

#include <stdio.h>

int main(void)
{
	int arr[] = { 100, 200, 300, 400, 500 };

	// �迭 �������� ����� �ʱ�ȭ �и�
	int* ptr_arr = NULL;
	ptr_arr = arr;

	// �迭 �������� ����� ���ÿ� �ʱ�ȭ
	//int* ptr_arr = arr;

	// �迭 �������� �ּ� ����
	// arr = &arr[0]
	// ptr_arr + n = arr + n = &arr[0] + n : n��° ����� �ּ�
	printf("%p %p\n", arr, ptr_arr);  // 0��° ���(100)�� �ּ�
	printf("%p %p\n", arr + 1, ptr_arr + 1);  // 1��° ���(200)�� �ּ�
	printf("%p %p\n", arr + 2, ptr_arr + 2);  // 2��° ���(300)�� �ּ�
	printf("%p %p\n", arr + 3, ptr_arr + 3);  // 3��° ���(400)�� �ּ�
	printf("%p %p\n", arr + 4, ptr_arr + 4);  // 4��° ���(500)�� �ּ�

	printf("\n");

	// �迭 �������� ������ ����
	// *arr = *(&arr[0])
	// *(ptr + n) = *(arr + n) = *(&arr[0] + n) : n��° ����� ��
	printf("%d %d\n", *arr, *ptr_arr);  // 100
	printf("%d %d\n", *(arr + 1), *(ptr_arr + 1));  // 200
	printf("%d %d\n", *(arr + 2), *(ptr_arr + 2));  // 300
	printf("%d %d\n", *(arr + 3), *(ptr_arr + 3));  // 400
	printf("%d %d\n", *(arr + 4), *(ptr_arr + 4));  // 500

	printf("\n");

	// �迭 �������� �ε��� ����� ������ ����
	// ptr_arr[n] = *(ptr + n) = *(arr + n) = *(&arr[0] + n) = *(&arr[n])
	printf("%d %d\n", ptr_arr[0], *ptr_arr);  // 100 100
	printf("%d %d\n", ptr_arr[1], *(ptr_arr + 1));  // 200 200
	printf("%d %d\n", ptr_arr[2], *(ptr_arr + 2));  // 300 300
	printf("%d %d\n", ptr_arr[3], *(ptr_arr + 3));  // 400 400
	printf("%d %d\n", ptr_arr[4], *(ptr_arr + 4));  // 500 500

	return 0;
}