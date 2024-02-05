// 16.17 ���� �μ�
/*
	���� �μ� (Variable Argument)
	�Լ��� �����Ű�� ���� �μ��� ������ �����Ǿ����� ���� �μ�
	- ���� �μ���...�� ǥ���Ѵ�. 
	- ���� �μ��� �ϳ� �̻��� �μ��� �Բ� ����Ǿ�� �Ѵ�. 
	- ���� �μ��� �ݵ�� ������ �μ��� ��ġ�ؾ� �Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdarg.h>

double average(int count, ...);

int main(void)
{
	double a = average(3, 1.1, 2.2, 3.3);
	printf("%lf\n", a);

	return 0;
}

double average(int count, ...)
{
	// �μ� ������ (Argument Pointer)
	va_list ap;
	double sum = 0.0;
	
	// �μ� �����͸� ���� �μ� ���� ������ �μ��� count�� �ּҷ� �ʱ�ȭ
	va_start(ap, count);
	for (int i = 0; i < count; ++i) 
	{
		// �ڷ����� double�� ���� �μ��� �а� ap�� �ּҸ� �������� �̵���Ų��.
		sum += va_arg(ap, double);
	}
	// �μ� �����͸� null�� �ʱ�ȭ�Ѵ�.
	va_end(ap);

	return sum;
};
