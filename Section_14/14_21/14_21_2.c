// 14.21 �Լ� �������� ����
/*
	�Լ� ������ (Function Pointer)
	������ �� �ִ� �ڵ�(�Լ�)�� �ּҸ� �����ϴ� ������
*/

#include <stdio.h>

// �Լ� func
int func(char i)
{
	return i + 1;
};

int main()
{
	// �Լ� ������ ����
	int (*ptr_func)(char) = &func;

	// �Լ� �����Ͱ� ����Ű�� �Լ� ����
	int ret_val = (*ptr_func)('A');

	printf("%d\n", ret_val);

	return 0;
};