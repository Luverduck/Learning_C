// 4.10 scanf() �Լ��� ����
/*
	scanf �Լ�
	int scanf( const char *format, ... );
	- format : ���� ������
	- ... : ���� �μ�
	- [return] int : �б⿡ ������ ����
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <inttypes.h> // intmax_t

int main(void)
{
	// �ε� �Ҽ����� ���� ������
	/*double d = 0.0;
	scanf("%f", &d);
	printf("%f\n", d);*/

	float f = 0.0;
	scanf("%lf", &f);
	printf("%lf\n", f);

	return 0;
}