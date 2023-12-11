// 10.13 �������� �迭�� 2���� �迭

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// ���ڿ��� ���� ������ �迭 ����
	//char* arr_ptr[] = { "Aladin", "Jasmine", "Magic Carpet", "Genie" };

	//// ���ڿ� �迭�� ����
	//const int arr_ptr_length = sizeof(arr_ptr) / sizeof(char*);

	//// ������ ���ڿ��� �Ҵ�� �޸� ���� �ּ� ���
	//for (int i = 0; i < arr_ptr_length; ++i)
	//	printf("%s at %lu\n", arr_ptr[i], (unsigned)arr_ptr[i]); // ���ڿ� ���� �޸� ������ �������� �ʴ�.

	//printf("\n");

	// ���ڿ��� ���� 2���� �迭 ����
	char arr[][15] = {"Aladin", "Jasmine", "Magic Carpet", "Genie"};

	// 2���� �迭�� ����
	const int arr_length = sizeof(arr) / sizeof(arr[0]);

	// ������ ���ڿ��� �Ҵ�� �޸� ���� �ּ� ���
	for (int i = 0; i < arr_length; ++i)
		printf("%s at %lu\n", arr[i], (unsigned)&arr[i]); // ���ڿ� ���� �޸� ������ 15�� �����ϴ�.

	return 0;
}