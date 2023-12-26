// 11.7 선택 정렬 문제 풀이
/*
	선택 정렬 (Selection Sort)
	총 n개의 데이터에 대하여
	i번째 자료를 (i+1)번째 자료부터 마지막 자료까지 순서대로 비교한 후
	가장 작은 자료를 찾아 i번째 값과 위치를 바꾼다.
*/

#include <stdio.h>

void swap(int* ptr_x, int* ptr_y);
void selectionSort(int* arr, int size);
void printArray(int* arr, int size);

int main(void)
{
	int arr[] = { 64, 25, 12, 22, 11 };
	int size = sizeof(arr) / sizeof(arr[0]);

	// 정렬 전 배열 출력
	printArray(arr, size);

	// 정렬
	selectionSort(arr, size);

	// 정렬 후 배열 출력
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