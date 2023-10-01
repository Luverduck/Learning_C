// 3.8 8������ 16����
/*
	10������ N������ ���
	- 2���� : ���� �����ڰ� �������� ����
	- 8���� : ���� �����ڷ� '%o' ���
	- 16���� : ���� �����ڷ� '%x', '%X' ���
*/
#include <stdio.h>
int main(void)
{
	// 10����
	unsigned int decimal = 4294967295;
	printf("decimal is %u\n", decimal);

	// 10������ 2������ ���
	// - printf() �Լ����� 2���� ����� ���� ���� �����ڰ� ���ǵǾ����� �ʴ�.

	// 10������ 8������ ��� 
	// - ���� ������ '%o' : 10������ ���λ簡 ���� 8������ ���
	printf("octal is %o\n", decimal);
	// - ���� ������ '%#o' : 10������ ���λ簡 ���Ե� 8������ ���
	printf("octal is %#o\n", decimal);

	// 10������ 16������ ��� 
	// - ���� ������ '%x' : 10������ ���λ簡 ���� �ҹ��� 16������ ��� (0 ~ 9, a ~ f)
	printf("hexadecimal(lower) is %x\n", decimal);
	// - ���� ������ '%#x' : 10������ ���λ簡 ���Ե� �ҹ��� 16������ ���
	printf("hexadecimal(lower) with prefix is %#x\n", decimal);
	// - ���� ������ '%X' : 10������ ���λ簡 ���� �빮�� 16������ ��� (0 ~ 9, A ~ F)
	printf("hexadecimal(capital) is %X\n", decimal);
	// - ���� ������ '%#X' : 10������ ���λ簡 ���Ե� �빮�� 16������ ���
	printf("hexadecimal(capital) with prefix is %#X\n", decimal);

	return 0;
}