// 3.5 ������ �Ǽ�
/*
	����(Integer)
	0, ���� ����, ���� ������ ����
	�ٷ�� ������ ������ ���� �ڷ��� �տ� signed �Ǵ� unsigned�� ����
	������ �����ϴ� 10���� ������ ���� 2������ ��ȯ�Ǿ� �޸𸮿� ����

	�Ǽ�(Real number)
	�ε��Ҽ���(floating point) ǥ���� ���
	������ �����ϴ� 10���� �Ǽ��� ���� 2������ ��ȯ�Ǿ� �޸𸮿� ����
*/

#include <stdio.h>
int main(void)
{
	// ���� (Integer)
	// 1) ��ȣ�� �ִ� �ڷ��� 
	// - �ֻ��� ��Ʈ�� ��ȣ ��Ʈ�� ���
	// char : 1[Byte]
	char char_min = -128, char_max = 127;
	// short : 2[Byte]
	short short_min = -32768, short_max = 32767;
	// int : 4[Byte]
	int int_min = -2147483648, int_max = 2147483647;
	// long : 4[Byte]
	long long_min = -2147483648, long_max = 2147483647;
	// long long : 8[Byte]
	long long long_long_min = -9223372036854775808, long_long_max = 9223372036854775807;

	// 2) ��ȣ�� ���� �ڷ���
	// - �ֻ��� ��Ʈ���� ���� ��Ÿ���� �� ���
	// - ��Ÿ�� �� �ִ� ���� ������ ��ȣ�� ���� �ڷ����� 2��
	// unsigned char : 1[Byte]
	unsigned char char_min = 0, char_max = 255;
	// unsigned short : 2[Byte]
	unsigned short short_min = 0, short_max = 65535;
	// unsigned int : 4[Byte]
	unsigned int int_min = 0, int_max = 4294967295;
	// unsigned long : 4[Byte]
	unsigned long long_min = 0, long_max = 4294967295;
	// unsigned long long : 8[Byte]
	unsigned long long long_long_min = 0, long_long_max = 18446744073709551615;

	return 0;
}