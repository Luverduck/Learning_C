// 10.7 �迭�� �Լ����� �������ִ� ���

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

float func(float* ptr_arr, size_t size_arr);

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

	// �Լ� ȣ��
	func(arr, sizeof(arr) / sizeof(float));

	return 0;
}

float func(float* ptr_arr, size_t size_arr)
{
	// �Լ� ������ �迭�� ��� ���
	for (int i = 0; i < size_arr; ++i) {
		printf("%p\t%.1f\n", &ptr_arr[i], ptr_arr[i]);
	}
	printf("\n");
};