// 12.1 �޸� ���̾ƿ� �Ⱦ��
/*
	C ���α׷��� �޸� ����

	1. Code ���� (Code segment)**
	���� ������ ���α׷� �ڵ带 �����ϴ� ����
*/

#include <stdio.h>

// Code ������ ����� func �Լ�
void func() 
{
	int i = 123; // �Լ� func ȣ�� �� Stack ������ ����Ǵ� ����
}

// Code ������ ����� main �Լ�
int main(void)
{
	// ���ڿ� "Banana"�� �ּ�
	const char* message = "Banana";

	// �Լ� func�� �ּ�
	void (*ptr_func)() = func; 

	// Code ������ ����� ���ڿ��� �ּ�
	printf("%lld\n", (long long)message);

	// Code ������ ����� func �Լ��� �ּ�
	printf("%lld\n", (long long)ptr_func);

	// Code ������ ����� main �Լ��� �ּ�
	printf("%lld\n", (long long)main);

	return 0;
}