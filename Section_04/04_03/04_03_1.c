// 4.3 ���ڿ��� �޸𸮿� ����Ǵ� ����
/*
	���ڿ��� �޸𸮿� ����Ǵ� ����
	���ڿ��� char �迭�� ����ȴ�.
	���ڿ��� ����� �� ���ڿ��� ���� ��Ÿ���� NULL(\0)�� �Բ� �����Ѵ�.
	���� NULL�� ����Ǵ� ��Ҹ� �����ؼ� �迭�� ���̸� �����ؾ� �Ѵ�.
*/

#include <stdio.h>
int main(void)
{
	// ���ڿ� ���
	// �迭�� ������ ��ҿ� NULL�� �����ϴ� ���
	char char_1234[5] = "1234";
	printf("%s\n", char_1234); // ��� : 1234
	printf("char_5[4] is %c\n", char_1234[4]); // ��� : 

	// �迭�� ������ ��ҿ� ���� '5'�� �����ϴ� ���
	char char_12345[5] = "12345";
	printf("%s\n", char_12345); // ��� : 12345����������������������???
	printf("char_5[4] is %c\n", char_12345[4]); // ��� : 5

	return 0;
}