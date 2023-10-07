// 3.14 ���Ҽ���
/*
	���Ҽ��� ����
	Visual Studio���� ���Ҽ����� ����ü ���·� �����Ѵ�.
	_Fcomplex : float�� ���Ҽ�
	_Dcomplex : double�� ���Ҽ�
	_Lcomplex : long double�� ���Ҽ�
*/

#include <stdio.h>
#include <complex.h>
int main(void)
{
	// _Fcomplex
	_Fcomplex z_float = { 1.0f, 0.5f };
	printf("%f\n", crealf(z_float)); // �Ǽ��� ���
	printf("%f\n", cimagf(z_float)); // ����� ���

	// _Dcomplex
	_Dcomplex z_double = { 1.0, 0.5 };
	printf("%f\n", creal(z_double)); // �Ǽ��� ���
	printf("%f\n", cimag(z_double)); // ����� ���

	// _Lcomplex
	_Lcomplex z_long_double = { 1.0l, 0.5l };
	printf("%f\n", creall(z_long_double)); // �Ǽ��� ���
	printf("%f\n", cimagl(z_long_double)); // ����� ���

	return 0;
}