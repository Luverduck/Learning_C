// 10.2 �迭�� �⺻���� ��� ���

#include <stdio.h>
int main(void)
{
	// �迭�� Ư¡
	// 5. �迭�� ���ӵ� �Ϻ� ��Ҹ� �κ������� �ʱ�ȭ�� �� �ִ�.
	int arr[5] = { 1,2 }; // �����Ϸ��� ������ ��ҵ��� �ڵ����� 0���� �ʱ�ȭ
	for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
		printf("arr[%d] = %d\n", i, arr[i]);
	};

	return 0;
}