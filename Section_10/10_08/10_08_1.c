// 10.8 �� ���� �����ͷ� �迭�� �Լ����� �������ִ� ���

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

float func(float* ptr_arr_start, float* ptr_arr_end);

int main(void)
{
	// �迭 ����
	float arr[] = { 1.8, -0.2, 6.3, 13.9, 20.5 };

	float* ptr_arr = arr;

	// �迭�� ��� ���
	for (int i = 0; i < sizeof(arr) / sizeof(float); ++i) {
		printf("%p\t%.1f\n", &arr[i], ptr_arr[i]);
	}
	printf("\n");

	// �Լ� ȣ��� 
	// 0��° ����� �޸� ���� �ּҿ� ������ ����� �޸� ���� �ּҸ� ���ڷ� ����
	func(arr, arr + 5);

	return 0;
}

float func(float* ptr_arr_start, float* ptr_arr_end)
{
	// �Լ� ������ �迭�� ��� ���
	for (float* ptr = ptr_arr_start; ptr < ptr_arr_end; ++ptr) {
		// �����Ϳ� �������� ���� ������ ������ �����Ͱ� ����Ű�� �����͵� ������ ����(�ε���)�� �ǹ��Ѵ�.
		printf("%p\t%.1f\n", &ptr_arr_start[ptr - ptr_arr_start], ptr_arr_start[ptr - ptr_arr_start]);
	}

	printf("\n");
};