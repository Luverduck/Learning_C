// 11.2 �޸� ���̾ƿ��� ���ڿ�

#include <stdio.h>
#include <stdlib.h>

int var_global_initialized = 1;
int var_global_uninitialized;

void func_test();

int main(void)
{
	// ���� ����Ǵ� �޸� ������ �� �ּ�

	// Code ����
	printf("%p [Code]\n", "I am a String.");

	// Data ����
	printf("%p [Data]\n", &var_global_initialized);

	// BSS ����
	printf("%p [BSS]\n", &var_global_uninitialized);

	// Heap ����
	char* var_dynamic = (char*)malloc(sizeof(char) * 100);
	printf("%p [Heap]\n", var_dynamic);

	// Stack ����
	func_test();

	return 0;
}

void func_test() {
	int var_local = 0;
	printf("%p [Stack]\n", &var_local);
};