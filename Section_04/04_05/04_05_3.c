// 4.5 ��ȣ�� ����� ��ó���� #define
/*
	��ȣ�� ��� (Symbolic Constant)
	���� ����� �޸� ������ �̸�(������)�� ���� ���

	��ȣ�� ����� ����
	1) ��ó���� #define ���
	2) 'const' Ű���� ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// 2) 'const' Ű���� ���
	const float pi = 3.141592f;

	// �� �� 'const' Ű����� ���ǵ� ����� �� ���� �ٲ� �� ����.
	pi = 10.0f;

	return 0;
}