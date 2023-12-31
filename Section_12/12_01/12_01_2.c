// 12.1 �޸� ���̾ƿ� �Ⱦ��
/*
	C ���α׷��� �޸� ����

	2. Data ���� (Data segment)**
	�ʱ�ȭ�� ���� ������ �����ϴ� ����
	- ��������� �ʱ�ȭ�� ���� ���� / ���� ���� ����
*/

#include <stdio.h>

// �ʱ�ȭ�� ���� ����
int var_global_initialized = 1024;

void func() 
{
	// ���� ���� ����
	static int var_func_local_static = 456;
	printf("%lld\n", (long long)&var_func_local_static);
}

int main(void)
{
	// �ʱ�ȭ�� ���� ����
	printf("%lld\n", (long long)&var_global_initialized);

	// ���� ���� ����
	static int var_main_local_static = 789;
	printf("%lld\n", (long long)&var_main_local_static);

	// ���� ������ ���� ���� ����
	func();

	return 0;
}