// 10.2 �迭�� �⺻���� ��� ���

#include <stdio.h>
int main(void)
{
	// �迭�� Ư¡
	// 4. �迭�� ��Ҹ� �ʱ�ȭ���� ���� ��� ������ ��(garbage value)�� ����ȴ�.
	int arr[5];
	for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
		printf("arr[%d] = %d\n", i, arr[i]);
	};

	return 0;
}