// 11.8 ���ڿ��� �����͸� �����ϱ�

#include <stdio.h>
#include <string.h> // strcmp()

void swap(char** ptr_x, char** ptr_y);
void selectionSort(char* arr[], int size);
void printArray(char* arr[], int size);

int main(void)
{
	// TO DO : ���ڿ� ����
	// ���ڿ��� �迭 (���ڿ��� �ּҰ� ����� �迭)
	char* arr[] = { "Cherry", "AppleBee", "Pineapple", "Apple", "Orange" };
	int size = sizeof(arr) / sizeof(arr[0]);

	// ���� �� �迭 ���
	printArray(arr, size);

	// ���� (���ڿ� ���� �� �� ���ڿ� �ּҸ� ����)
	selectionSort(arr, size);

	// ���� �� �迭 ���
	printArray(arr, size);

	return 0;
}

void swap(char** ptr_x, char** ptr_y)
{
	char* temp = NULL;
	temp = *ptr_x;
	*ptr_x = *ptr_y;
	*ptr_y = temp;
};

void selectionSort(char* arr[], int size)
{
	for (int i = 0; i < size; ++i) {
		// ���� ���� ���ڿ� ����
		char** str_min = &arr[i];
		for (int j = i + 1; j < size; ++j) {
			if (strcmp(arr[j], *str_min) < 0) {
				str_min = &arr[j];
			}
		}
		swap(&arr[i], str_min);
	}
};

void printArray(char* arr[], int size)
{
	for (int i = 0; i < size; ++i) {
		printf("%s ", arr[i]);
	};
	printf("\n");
};