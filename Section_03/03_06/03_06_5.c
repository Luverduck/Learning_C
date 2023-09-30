// 3.6 ������ �����÷ο�
/*
	�����÷ο� (Overflow)
	��ǻ���� ��� ����(arithmetic operation)�� ���� ǥ�� ������ �ʰ��ϴ� ���� ������ �� �߻��ϴ� ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h> // �ڷ����� �ִ� ũ�⿡ ���� ��ũ�� ����� ���Ե� ��� ����
#include <stdlib.h> // C��� ǥ�� ���̺귯�� (Standard Library)

int main(void)
{
	// �����÷ο� 1) �ڷ����� ���� �� �ִ� �ִ밪���� ū ���� ������ ��
	// unsigned int�� ���� �� �ִ� �ִ밪 4294967295���� ū ���� ������ ���
	unsigned int u_int_max = 4294967297;

	// i to binary representation
	char buffer[33]; 
	// ���� 33���� �޸𸮿� ������ ������ �� �ִ� �迭 ���� 
	// ( unsigned int�� �ִ� ũ�Ⱑ 32[bit] ������ 33�� ���ڿ��� ������ ������ ���ڿ��� ���� ��Ÿ���� ������ '\0'�� �ֱ� ���� )
	_itoa(u_int_max, buffer, 2);
	// �Է��� 10���� 'u_int_max'�� '2'������ ��ȯ�Ͽ� 'buffer'�� ����

	// print decimal and binary
	printf("decimal : %u\n", u_int_max); // ��� : 0
	printf("binary : %s\n", buffer); // ��� : 0

	// �ؼ�
	// u_int_max = 100000000000000000000000000000000 (33�ڸ� - ���� '1'�� 1��, ���� 0�� 32��)
	// �ְ� �ڸ��� ��Ʈ�� '1'�� ������ �� 00000000000000000000000000000000�� �����Ѵ�.
	// u_int_max�� ����� �� : 00000000000000000000000000000000

	return 0;
}