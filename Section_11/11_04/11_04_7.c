// 11.4 ���ڿ��� �Է¹޴� �پ��� �����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// �ݺ����� �̿��Ͽ� �Է� ������ ��� ���� ���
	char str[5];

	while (fgets(str, 5, stdin) != NULL && str[0] != '\n') 
	{
		fputs(str, stdout);
	}

	return 0;
}