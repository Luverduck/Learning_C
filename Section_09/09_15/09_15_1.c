// 9.15 �� �����Ϳ� ��Ÿ�� ����
/*
	�� ������ (Null Pointer)
	������ ���� �� �����Ϳ� ����� �ּҰ��� NULL(0)�� �ʱ�ȭ 
*/

#include <stdio.h>
int main(void)
{
	// �߸��� �ּҷ��� ������

	// ������ ���� �� ����� ���������� �ʱ�ȭ
	int* ptr = 1234;
	
	printf("%p\n", ptr);
	printf("%d\n", *ptr);

	return 0;
}