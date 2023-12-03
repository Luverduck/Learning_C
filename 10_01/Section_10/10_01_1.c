// 10.1 �迭�� �޸�
/*
	�迭 (Array)
	������ �ڷ����� �����Ͱ� ���������� ������ ������ �ڷ� ����
	- �迭�� ���ӵ� �޸� ������ �Ҵ�ȴ�.
	- �迭�� ��Ҵ� index�� ������ �� �ִ�.
*/

#include <stdio.h>
int main(void)
{
	// �迭 ����
	char arr_char[3] = { 'a', 'b', 'c'};
	// �ּ� Ȯ��
	printf("sizeof(char) = %zu\n", sizeof(char));
	printf("%p\n", &arr_char[0]); // ��Ұ��� �޸� ������ sizeof(char)���� Ȯ���� �� �ִ�.
	printf("%p\n", &arr_char[1]);
	printf("%p\n", &arr_char[2]);

	printf("\n\n");

	// �迭 ����
	int arr_int[3] = { 1, 2, 3 };
	// �ּ� Ȯ��
	printf("sizeof(int) = %zu\n", sizeof(int));
	printf("%p\n", &arr_int[0]); // ��Ұ��� �޸� ������ sizeof(int)���� Ȯ���� �� �ִ�.
	printf("%p\n", &arr_int[1]);
	printf("%p\n", &arr_int[2]);

	return 0;
}