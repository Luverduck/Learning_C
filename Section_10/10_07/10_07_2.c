// 10.7 �迭�� �Լ����� �������ִ� ���

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

float func(float arr[]);

int main(void)
{
	// �迭 ����
	float arr[] = { 1.8, -0.2, 6.3, 13.9, 20.5 };

	// �迭 ���� ���
	printf("size in main = %zd\n", sizeof(arr));
	for (int i = 0; i < sizeof(arr) / sizeof(float); ++i) {
		printf("%.1f ", arr[i]);
	}
	printf("\n");

	func(arr);

	return 0;
}

float func(float arr_func[]) 
{
	// �Լ� ȣ��� ���޵� �迭 ���� ���
	printf("size in func = %zd\n", sizeof(arr_func));

	// �迭�� ��� ���
	for (int i = 0; i < sizeof(arr_func) / sizeof(float); ++i) {
		printf("%.1f ", arr_func[i]);
	}
	printf("\n");
};