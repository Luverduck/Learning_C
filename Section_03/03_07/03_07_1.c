// 3.7 �پ��� ��������

#include <stdio.h>
int main(void)
{
	// ��ȣ�� �ִ�(signed) ������
	// char
	char _char = 1;
	signed char signed_char = 1;
	printf("%c\n", _char); // �ڷ��� char�� ���� ������ : %c�� %hhd ��� ����
	printf("%hhd\n", _char); 

	// short
	short _short_ = 1;
	signed short int signed_short_int = 1;
	printf("%hd\n", _short_); // �ڷ��� short�� ���� ������ : %hd
	
	// int
	int _int = 1;
	signed int signed_int = 1;
	printf("%d\n", _int); // �ڷ��� int�� ���� ������ : %d�� %i ��� ����
	printf("%i\n", _int);

	// long
	long _long = 1;
	signed long signed_long = 1;
	printf("%ld\n", _long); // �ڷ��� long�� ���� ������ : %ld

	// long long
	long long long_long_ = 1;
	long long int long_long_int = 1;
	printf("%lld\n", long_long_); // �ڷ��� long long�� ���� ������ : %lld

	return 0;
}