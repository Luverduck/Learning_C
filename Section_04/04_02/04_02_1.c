// 4.2 sizeof ������
/*
	sizeof ������
	�ǿ����ڷ� ���޵� ����� ������ �ش��ϴ� Ÿ���� �޸� ũ�⸦ ��ȯ�ϴ� ������
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	// ����� �ڷ��� ũ�� ��ȯ
	size_t size_constant = sizeof(int);
	printf("%u\n", size_constant);

	// ������ �ڷ��� ũ�� ��ȯ
	int a = 0;
	// 1) sizeof ������
	size_t size_variable_case1 = sizeof a;
	printf("%u\n", size_variable_case1);
	// 2) sizeof(������)
	size_t size_variable_case2 = sizeof(a);
	printf("%u\n", size_variable_case2);
};