// 16.8 �̸� ���ǵ� ��ũ�ε�, #line, #error
/*
	�̸� ���ǵ� ��ũ�ε�
	__FILE__ 	��ó���� ������ �ҽ� ������ �̸�(���)
	__DATE__	��ó���� ������ ����
	__TIME__	��ó���� ������ �ð�
	__LINE__	��ó���� ������ �� ��ȣ
	__func__	��ó���� ������ �Լ��� �̸�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "DifferentFile.h"

void different_function();

int main(void)
{
	different_function();
	different_function_in_different_file();

	return 0;
}

void different_function()
{
	printf("This function is %s\n", __func__);
	// ��� : different_function
	printf("This line is %d\n", __LINE__);
	// ��� : 30
};