// 10.15 �������� ȣȯ��
/*
	�������� ȣȯ�� ���� ������� 
	���������� ����ϴ� ����������� �������� �ʴ´�. 
*/

#include <stdio.h>
int main(void)
{
	// �ڷ����� �ٸ� ������
	
	// ����
	int var_int = 5;
	double var_double = 1.5;

	// ������
	int* ptr_int;
	double* ptr_double;

	// �������� �ڷ����� ��ġ�ϴ� �ڷ����� ���� ����� �޸� �ּ� ����
	ptr_int = &var_int;
	ptr_double = &var_double;

	// �������� �ڷ����� ��ġ���� �ʴ� �ڷ����� ���� ����� �޸� �ּ� ���� (���)
	ptr_int = &var_double; // int * != double * �̹Ƿ� Warning
	ptr_double = &var_int; // double * != int * �̹Ƿ� Warning

	// ���� �ٸ� �ڷ����� �����Ͱ��� ���� (���)
	ptr_int = ptr_double;  // int * != double * �̹Ƿ� Warning

	return 0;
}