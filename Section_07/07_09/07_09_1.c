// 7.9 ���� ������
/*
	���� ������ (Conditinal Operator)
	X ? A : B
	X�� true�� �� A, false�� �� B�� ��ȯ
*/

#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	// ���� ������ ����
	int temp;
	temp = true ? 1024 : 7;
	printf("%d\n", temp);

	temp = false ? 1024 : 7;
	printf("%d\n", temp);

	return 0;
}