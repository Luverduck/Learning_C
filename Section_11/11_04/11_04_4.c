// 11.4 ���ڿ��� �Է¹޴� �پ��� �����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// fgets �Լ��� �Է¹��� ���ڿ����� ���� ���� '\n'�� �� ���� '\0'�� ġȯ
	char str[100];

	fgets(str, 100, stdin);

	int i = 0;
	while (str[i] != '\n' && str[i] != '\0') 
	{
		if (str[i] == '\n') {
			str[i] = '\0';
		}
		i++;
	}
	
	fputs(str, stdout);

	return 0;
}