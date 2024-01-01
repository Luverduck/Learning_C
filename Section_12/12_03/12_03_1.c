// 12.3 ������ ������ ���� ����, ��ü�� ���� �ð�
/*
	������ ���� (variable scope, visibility)
	�ĺ����� ��ȿ ����

	��� ������ (block scope)
	������ ������ ��� ������ ���
	- �߰�ȣ ���ο� ����� ����

	�Լ� ������ (function scope)
	������ ������ �Լ��� ��� ������ ���
	- �Լ��� ���ο� ����� ���� �� �Լ��� �μ�

	�Լ� ���� ������ (function prototype scope)
	������ ������ �Լ� ������ ǥ������ ���
	- �Լ� ������ �μ�

	���� ������ (file scope)
	������ ������ ������ ���
	- ��� �Լ��� �ܺο� ����� ����
*/

#include <stdio.h>

int var_global = 10;          // ���� var_global�� ���� �������� ������.

// �Լ� ����
void func(int var_arg);       // ���� var_arg�� �Լ� ���� �������� ������.

// ���� �Լ�
int main()
{
	int var_local_main = 12;    // ���� var_local_main�� ���� �Լ� �������� ������.

	{ // [��� ����]
		int var_local_block = 45; // ���� var_local_block�� ��� �������� ������.
	}	// [��� ��]

	for (int i = 0; i < 10; ++i) // ���� i�� for���� ��� �������� ������.
	{
		int var_local_for = 2;    // ���� var_local_for�� for���� ��� �������� ������.
	};

	return 0;
};

// �Լ� ����
void func(int var_arg)        // ���� var_arg�� func �Լ� �������� ������.
{
	int var_local_func = 51;    // ���� var_local_func�� func �Լ� �������� ������.
	// ...
};