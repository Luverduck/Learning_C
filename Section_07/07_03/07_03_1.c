// 7.3 ctype.h ���� �Լ���
/*
	Reference Link
	https://www.tutorialspoint.com/c_standard_library/ctype_h.htm

	int islower(int ch)
	ch�� �ҹ����� ��� 0�� �ƴ� ���� ��ȯ

	int isupper(int ch)
	ch�� �빮���� ��� 0�� �ƴ� ���� ��ȯ

	int tolower(int ch)
	ch�� �ҹ��ڷ� ��ȯ�� �� �� ���� int�� ��ȯ

	int toupper(int ch)
	ch�� �빮�ڷ� ��ȯ�� �� �� ���� int�� ��ȯ
*/

// TO DO : �Է¹��� ���ڰ� �ҹ����̸� �빮�ڷ�, �빮���̸� �ҹ��ڷ� ��ȯ

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	int result_tolower;

	while ((ch = getchar()) != '\n') 
	{
		printf("result of islower : %d\n", islower(ch));
		printf("result of isupper : %d\n", isupper(ch));
		printf("result of islower : %d\n", ch = tolower(ch));
		putchar(ch);
	}

	return 0;
}