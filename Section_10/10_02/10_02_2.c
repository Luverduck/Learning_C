// 10.2 �迭�� �⺻���� ��� ���

#include <stdio.h>
int main(void)
{
	int arr[] = { 1, 2, 3 };

	// �迭�� ����
	printf("length of array = %zd\n", sizeof(arr) / sizeof(int));

	// �迭�� ��� ���
	for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	return 0;
}