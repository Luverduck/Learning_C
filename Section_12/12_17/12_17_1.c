// 12.17 ���� �Ҵ� �޸𸮿� ���� ������ �з�
/*
	���� ���� (Dynamic Variable)
	Dynamic Storage Class�� ���ϴ� ����
	- ���� �ð� : dynamic (����ڰ� ���� �����ϱ� ������ �޸� ����)
	- ���� ���� : -
	- ���� ���� : -
	- ���� ��ġ : �� (Heap)
*/

#include <stdio.h>
#include <stdlib.h>

int var_global = 123;

void func()
{
	int var_local = 123;
	printf("Local Variable \t\t%lld\n", (long long)&var_local);
}

int main(void)
{
	const char* message = "Banana";

	void (*ptr_func) = func; // address of function

	printf("Local Pointer \t\t%lld\n", (long long)&message);
	printf("Function Pointer \t%lld\n", (long long)&ptr_func);
	printf("String Data \t\t%lld\n", (long long)&message);
	printf("Function Address \t%lld\n", (long long)ptr_func);
	printf("Function Address \t%lld\n", (long long)main);
	printf("Global Variable \t%lld\n", (long long)&var_global);

	func();

	int* ptr = (int*)malloc(100 * sizeof(int));
	if (ptr == NULL) exit(EXIT_FAILURE);

	printf("Allocated Memory \t%lld\n", (long long)ptr);

	free(ptr);

	return 0;
}