// 3.7 �پ��� ��������

#include <stdio.h>
int main(void)
{
	// ��ȣ�� ����(unsigned) ������
	// unsigned char
	unsigned char unsigned_char = 1;
	printf("%c\n", unsigned_char); // �ڷ��� unsigned char�� ���� ������ : %c�� %hhu ��� ����
	printf("%hhu\n", unsigned_char);

	// unsigned short
	unsigned short unsigned_short = 1;
	unsigned short int unsigned_short_int= 1;
	printf("%hu\n", unsigned_short); // �ڷ��� unsigned short�� ���� ������ : %hu

	// unsigned int
	unsigned int unsigned_int = 1;
	unsigned unsigned_ = 1;
	printf("%u\n", unsigned_int); // �ڷ��� unsigned int�� ���� ������ : %u

	// unsigned long
	unsigned long unsigned_long = 1;
	unsigned long int unsigned_long_int = 1;
	printf("%lu\n", unsigned_long); // �ڷ��� unsigned long�� ���� ������ : %lu

	// unsigned long long
	unsigned long long unsigned_long_long_ = 1;
	unsigned long long int unsigned_long_long_int = 1;
	printf("%llu\n", unsigned_long_long_); // �ڷ��� unsigned long long�� ���� ������ : %llu

	return 0;
}