// 12.1 �޸� ���̾ƿ� �Ⱦ��
/*
	C ���α׷��� �޸� ����
	
	4. Heap ���� (Heap segment)**
	�������� �����ϴ� ����
	- ��Ÿ�� �� �Ҵ�/�����Ǵ� ��� �� �Ǵ� ����
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> // malloc()

int main(void)
{
	int n = 0;
	scanf("%d", &n);

	// ���� �Ҵ�
	char* arr = (char*)malloc(sizeof(char) * n);
	printf("%lld\n", (long long)arr);

	return 0;
}