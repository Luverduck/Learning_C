// 11.3 ���ڿ��� �迭
/*
	���ڿ��� �迭
	���ڿ�(1���� �迭)�� ��ҷ� �ϴ� ���ڿ��� �迭(2���� �迭)
*/

#include <stdio.h>
int main(void)
{
	// ���ڿ��� �迭 ����
	// ������ �迭�� ����� ���ڿ��� �迭
	char* arr_str_1[5] = {
		"Dancing in the rain",
		"Counting apples",
		"Watching movies with friends",
		"Writing sad letters",
		"Studying the C language"
	};

	// 2���� �迭�� ����� ���ڿ��� �迭
	char arr_str_2[5][40] = {
		"Studying the C++ language",
		"Eating",
		"Watching Netflix",
		"Walking around till dark",
		"Deleting spam emails"
	};

	const char* ptr_arr_1 = "Dancing in the rain";
	const char* ptr_arr_2 = "Studying the C++ language";

	printf("%s %llu %llu\n", arr_str_1[0], (unsigned long long)arr_str_1[0], (unsigned long long)ptr_arr_1);
	printf("%s %llu %llu\n", arr_str_2[0], (unsigned long long)arr_str_2[0], (unsigned long long)ptr_arr_2);

	return 0;
}