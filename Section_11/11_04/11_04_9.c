// 11.4 ���ڿ��� �Է¹޴� �پ��� �����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* custom_str_input(char* str, int n);

int main(void)
{
	// ����� ���� ���ڿ� �Է� �Լ�
	char word[100];
	puts(custom_str_input(word, 100));

	return 0;
}

char* custom_str_input(char* str, int n)
{
	char* ptr_return;
	int i = 0;

	ptr_return = fgets(str, n, stdin);

	if (ptr_return)
	{
		while (str[i] != '\n' && str[i] != '\0') 
		{
			i++;
			if (str[i] == '\n') 
			{
				str[i] == '\0';
			}
			else 
			{
				while (getchar() != '\n') 
				{
					continue; // �Է� ���� ����
				}
			}
		}
	}
};