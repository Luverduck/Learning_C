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
	int temp = *ptr_x;
	*ptr_x = *ptr_y;
	*ptr_y = temp;
};

void selectionSort(int* arr, int size)
{
	// �ּҰ��� index
	int idx_min;

	// i��° ��ҿ� ���Ͽ�
	for (int i = 0; i < size - 1; ++i) 
	{
		// i��° ��Ұ� �ּҰ��̶� ����
		idx_min = i;

		// j��° ��ҿ� ���� �ּҰ� ����� �� ��
		for (int j = i + 1; j < size; ++j) 
		{
			// j��° ����� ���� ���� �ּҰ� ����� ������ ������
			if (arr[j] < arr[idx_min]) {
				idx_min = j; // index ��ü
			}
		}

		// i��° ��ҿ� �ּҰ� index�� ��Ҹ� ��ȯ
		swap(&arr[idx_min], &arr[i]);
	}
};

void printArray(int* arr, int size)
{
	for (int i = 0; i < size; ++i)
		printf("%d ", arr[i]);
	printf("\n");
};