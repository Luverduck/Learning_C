// 14.21 �Լ� �������� ����
/*
	�Լ� ������ (Function Pointer)
	������ �� �ִ� �ڵ�(�Լ�)�� �ּҸ� �����ϴ� ������
*/

#include <stdio.h>

// �Լ� func1
void func1() 
{
	return 0;
};

// �Լ� func2
int func2(char i)
{
	return i + 1;
};

int main(void)
{
	// �Լ� func1�� ���� �Լ� ������
	void (*ptr_func1)() = &func1;

	// �Լ� func2�� ���� �Լ� ������
	int (*ptr_func2)(char) = &func2;

	return 0;
}