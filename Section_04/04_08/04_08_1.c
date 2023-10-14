// 4.8 ��ȯ �������� ���ľ��
/*
	���� ��ȯ ���ľ� (Format Conversion Modifier)
	���� ��ȯ �������� ���� �ɼ�
	%[flags][width][.precision][length]specifier
*/

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <float.h>
int main(void)
{
	int num_integer_plus = 10010;
	int num_integer_minus = -10000;
	double num_real_number = 123.45678987;
	char num_char = 'H';
	char num_string[] = "Hello!";

	// ���� ��ȯ ���ľ� (Format Conversion Modifier)
	// %[flags][width][.precision][length]specifier

	// 1. flags
	printf("flags\n");
	printf("*%10d*\tWithout (-)\n", num_integer_plus);
	printf("*%-10d*\tWithout (-)\n", num_integer_plus); // - : �ʺ�(width) ������ ���ڸ� ���� ���� ( '-'�� �Է����� ���� ��� ������ ���� )
	printf("*%+10d*\tWith (+)\n", num_integer_plus);
	printf("*%+10d*\tWith (+)\n", num_integer_minus); // + : ������ ���� �տ� ��ȣ ǥ�� ( ����� �� '+' ��ȣ, ������ �� '-' ǥ�� )
	printf("*% 10d*\tspace\n", num_integer_plus);
	printf("*% 10d*\tspace\n", num_integer_plus); // (space) : ������ ���� �տ� ��ȣ ǥ�� ( ����� �� ���� 1ĭ, ������ ���� '-' ǥ�� )
	printf("*%#10d*\tWith #\n", num_integer_plus);
	printf("*%#10o*\tWith #\n", num_integer_plus);
	printf("*%#10x*\tWith #\n", num_integer_plus);
	printf("*%#10X*\tWith #\n", num_integer_plus); // # : ������ ���� �տ� ��� ���λ� ǥ�� ( ��ȯ ������ o, x, X�� �Բ� ��� )
	printf("*%010d*\tWith 0\n", num_integer_plus); // 0 : �ʺ�(width) ������ �� ������ 0���� ���

	// 2. width
	printf("\nwidth\n");
	printf("*%4d*\t\twidth 4\n", num_integer_plus);
	printf("*%10d*\twidth 10\n", num_integer_plus); // (number) : ���ڿ� ��� ������ �ּ� �ʺ� ���� (�ּ� �ʺ񺸴� ����� ���ڿ��� �ʺ� ������ �� ���̸�ŭ ���ڿ� �տ� �������� ǥ��)
	printf("*%*d*\twidth *\n", 10, num_integer_plus); // * : ���ڿ� ��� ������ �ּ� �ʺ� �μ��� ���� 

	// 3. .precision
	printf("\n.precision\n");
	// decimal
	printf("*%10.5d*\tprecision 5 for decimal\n", num_integer_plus);
	printf("*%10.6d*\tprecision 6 for decimal\n", num_integer_plus);
	// octal
	printf("*%10.5o*\tprecision 5 for octal\n", num_integer_plus);
	printf("*%10.6o*\tprecision 6 for octal\n", num_integer_plus);
	// hexadecimal (0f digit)
	printf("*%10.4x*\tprecision 4 for hexadecimal (0f digit)\n", num_integer_plus);
	printf("*%10.5x*\tprecision 5 for hexadecimal (0f digit)\n", num_integer_plus);
	// hexadecimal (0F digit)
	printf("*%10.4X*\tprecision 4 for hexadecimal (0F digit)\n", num_integer_plus);
	printf("*%10.5X*\tprecision 5 for hexadecimal (0F digit)\n", num_integer_plus); // d, i, o, u, x, X�� ���Ͽ� ����� ���ڿ��� �ּ� ��� �ڸ��� ���� (�ּ� �ڸ������� ���ڿ��� �ڸ����� ª���� �� ���̸�ŭ ���ڿ� �տ� 0���� ǥ��)
	// real number
	printf("*%10.3f*\tprecision 3 for real number\n", num_real_number);
	printf("*%10.4f*\tprecision 4 for real number\n", num_real_number);
	// string of char
	printf("*%10.5s*\tprecision 5 for string of chars\n", num_string);
	printf("*%10.4s*\tprecision 4 for string of chars\n", num_string);
	// .0 precision
	printf("*%10.0f*\tprecision 0 for real number\n", num_real_number);
	printf("*%10.0s*\tprecision 0 for string of chars\n", num_string);
	printf("\n\n");
	printf("*%10.f*\tprecision 0 for real number (without text 0)\n", num_real_number);
	printf("*%10.*f*\tprecision * for real number (argument is 4)\n", 4, num_real_number);

	// 4. length
	printf("\nlength\n");
	// hh : ������ ���� ��ȯ �����ڿ� �Բ� ����ϸ�, signed char �Ǵ� unsigned char������ ���
	printf("*%50hhd*\n", SCHAR_MAX);
	printf("*%50hhd*\n", SCHAR_MIN);
	printf("*%50hhu*\n", 255);
	printf("*%50hhu*\n", 0);
	// h : ������ ���� ��ȯ �����ڿ� �Բ� ����ϸ�, short int �Ǵ� unsigned short int������ ���
	printf("*%50hd*\n", SHRT_MAX);
	printf("*%50hd*\n", SHRT_MIN);
	printf("*%50hu*\n", USHRT_MAX);
	printf("*%50hu*\n", 0);
	// l : ������ ���� ��ȯ �����ڿ� �Բ� ����ϸ�, long int �Ǵ� unsigned long int������ ���
	printf("*%50ld*\n", LONG_MAX);
	printf("*%50ld*\n", LONG_MAX);
	printf("*%50lu*\n", ULONG_MAX);
	printf("*%50lu*\n", 0ul);
	// ll : ������ ���� ��ȯ �����ڿ� �Բ� ����ϸ�, long long int �Ǵ� unsigned long long int������ ���
	printf("*%50lld*\n", LLONG_MAX);
	printf("*%50lld*\n", LLONG_MIN);
	printf("*%50llu*\n", ULLONG_MAX);
	printf("*%50llu*\n", 0ll);
	// j : ������ ���� ��ȯ �����ڿ� �Բ� ����ϸ�, intmax_t �Ǵ� uintmax_t������ ���
	printf("*%50jd*\n", INT64_MAX);
	printf("*%50jd*\n", INT64_MIN);
	printf("*%50ju*\n", UINT64_MAX);
	printf("*%50ju*\n", 0ll);
	// z : ������ ���� ��ȯ �����ڿ� �Բ� ����ϸ�, size_t������ ǥ��
	printf("*%50zd*\n", INT64_MAX);
	printf("*%50zd*\n", INT64_MIN);
	printf("*%50zu*\n", UINT64_MAX);
	printf("*%50zu*\n", 0ll);
	// t : ������ ���� ��ȯ �����ڿ� �Բ� ����ϸ�, ptrdiff_t������ ǥ��
	printf("*%50hu*\n", 0);
	// L : �Ǽ��� ���� ��ȯ �����ڿ� �Բ� ����ϸ�, long double�� ǥ��
	printf("*%50Lf*\n", FLT_MAX);
	printf("*%50.47Lf*\n", FLT_MIN);
	printf("*%50.54Lf*\n", FLT_TRUE_MIN);
	printf("*%50Le*\n", FLT_MAX);
	printf("*%50.9Le*\n", FLT_MIN);
	printf("*%50.9Le*\n", FLT_TRUE_MIN);
	printf("*%50La*\n", FLT_MAX);
	printf("*%50.9La*\n", FLT_MIN);
	printf("*%50.9La*\n", FLT_TRUE_MIN);

	return 0;
}