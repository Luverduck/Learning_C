// 10.15 �������� ȣȯ��
/*
	�������� ȣȯ�� ���� �������
	���������� ����ϴ� ����������� �������� �ʴ´�.
*/

#include <stdio.h>
int main(void)
{
	// �����Ϳ� const

	// ����
	int x = 5;
	const int y = 10;

	// ������
	int* ptr_x = &x;
	const int* ptr_y = &y;
	// const int* ptr_y �� ��� : �������� ���� const
	// int* const ptr_y �� ��� : ptr_y�� ���� const
	// const int* const ptr_y �� ��� : �������� ���� const�̸鼭 ptr_y�� ���� const

	// const�� �ƴ� �����Ϳ� const�� ������ ����
	ptr_x = ptr_y; // ptr_x�� �������� ���� const�� �ƴϹǷ� Warning
	ptr_y = ptr_x; // const int* ptr_y �� ��� �������� ���� const�̹Ƿ� ptr_y�� ���� �ٲ� �� �ִ�.

	return 0;
}