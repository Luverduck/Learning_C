// 6.16 �迭�� ��Ÿ�� ����
/*
	�迭(Array)
	���� �ڷ����� ��ҵ�� �̷���� �ڷ� ����
	���ӵ� �ּ��� �޸� ������ �Ҵ�
	�ε���(index)�� ���� �迭�� Ư�� ��ġ�� �ִ� ��ҿ� ����
*/

#include <stdio.h>
int main(void)
{
	// 1. �迭�� ����� �ʱ�ȭ
	// 1) �迭�� ����
	char array_char[5];
	// 2) �迭�� ��� �ʱ�ȭ
	array_char[0] = 'A';
	array_char[1] = 'B';
	array_char[2] = 'C';
	array_char[3] = 'D';
	array_char[4] = 'E';
	
	for (int i = 0; i < sizeof(array_char) / sizeof(char); ++i) {
		printf("%c ", array_char[i]);
	}
	printf("\n");

	// 2. �迭�� ����� ���ÿ� �ʱ�ȭ
	int array_int[] = {1, 2, 3, 4, 5};
	
	for (int i = 0; i < sizeof(array_int) / sizeof(int); ++i) {
		printf("%d ", array_int[i]);
	}
	printf("\n");

	return 0;
}