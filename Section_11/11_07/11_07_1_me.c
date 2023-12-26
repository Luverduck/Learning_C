// 11.7 ���� ���� ���� Ǯ��
/*
	���� ���� (Selection Sort)
	�� n���� �����Ϳ� ���Ͽ�
	i��° �ڷḦ (i+1)��° �ڷ���� ������ �ڷ���� ������� ���� ��
	���� ���� �ڷḦ ã�� i��° ���� ��ġ�� �ٲ۴�.
*/

#include <stdio.h>

void swap(int* ptr_x, int* ptr_y);
void selectionSort(int* arr, int size);
void printArray(int* arr, int size);

int main(void)
{
	int arr[] = { 64, 25, 12, 22, 11 };
	int size = sizeof(arr) / sizeof(arr[0]);

	// ���� �� �迭 ���
	printArray(arr, size);

	// ����
	selectionSort(arr, size);

	// ���� �� �迭 ���
	printArray(arr, size);

	return 0;
}

void swap(int* ptr_x, int* ptr_y)
{
	int temp = 0;
	temp = *ptr_x;
	*ptr_x = *ptr_y;
	*ptr_y = temp;
};

void selectionSort(int* arr, int size)
{
	for (int j = 0; j < size; ++j) {
		int* ptr_min = &arr[j];
		for (int i = j + 1; i < size; ++i) {
			if (*ptr_min > arr[i]) {
				ptr_min = &arr[i];
			};
		};
		swap(&arr[j], ptr_min);
	};
};

void printArray(int* arr, int size)
{
	for (int i = 0; i < size; ++i)
		printf("%d ", arr[i]);
	printf("\n");
};