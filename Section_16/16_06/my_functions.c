// �Լ��� ������ ���Ե� ��� ���� include
#include "my_functions.h"

#include <stdio.h>

// ����� ����� ������ �ʱ�ȭ
int status = 0;

// ����� ����� �Լ��� ����
void print_status()
{
	printf("Address = %p, Value = %d\n", &status, status);
}

void print_address()
{
	printf("print_address()\n");
	printf("Static function address %p\n", multiply_static);
	printf("Static Variable address %p\n", &int_static);
}