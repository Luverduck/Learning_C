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
	char* temp = *ptr_x;
	*ptr_x = *ptr_y;
	*ptr_y = temp;
};

void selectionSort(char* arr[], int size)
{
	// ������ ���� ���ڿ��� index
	int idx_min;

	// i��° ��ҿ� ���Ͽ�
	for (int i = 0; i < size - 1; ++i) {

		// j��° ���ڿ��� ���� ������ ���� ���ڿ��̶� ����
		idx_min = i;

		// j��° ��ҿ� ���� ���� ������ ���� ���ڿ� ��
		for (int j = i + 1; j < size; ++j) {

			// ���� ���ڿ��� ASCII �ڵ尡 ������(������ �� ������)
			if (strcmp(arr[j], arr[idx_min]) < 0) {
				idx_min = j; // index ��ü
			}
		}

		// i��° ��ҿ� ���� ������ ���� ���ڿ��� ��ȯ
		swap(&arr[i], &arr[idx_min]);
	}
};

void printArray(char* arr[], int size)
{
	for (int i = 0; i < size; ++i) {
		printf("%s ", arr[i]);
	};
	printf("\n");
};