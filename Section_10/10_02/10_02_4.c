// 10.2 �迭�� �⺻���� ��� ���

#include <stdio.h>
int main(void)
{
	// �迭�� Ư¡
	// 2. �迭�� ��Ҵ� ���ӵ� �޸� ������ �Ҵ�ȴ�.
	int arr[7];
	for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
		printf("&arr[%d] = %lld\n", i, (long long)&arr[i]);
	}

	return 0;
}