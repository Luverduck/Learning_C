// 14.26 �Լ� �������� �迭 ��������

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

void update_string(char*, int(*)(int));
void ToUpper(char*);
void ToLower(char*);
void Transpose(char*);

int main(void)
{
	char options[] = { 'u', 'l', 't'};
	int n = sizeof(options) / sizeof(char);

	// �Լ� �������� �迭
	typedef void (*FUNC_TYPE)(char*);
	FUNC_TYPE operations[] = { ToUpper, ToLower, Transpose };

	printf("Enter a string\n>> ");

	char input[100];

	while (scanf("%[^\n]%*c", input) != 1)
		printf("Please try again.\n>> ");

	while (true)
	{
		printf("Choose an options:\n");
		printf("u) to upper\n");
		printf("l) to lower\n");
		printf("t) transpose\n");

		// �ɼ� ����
		char option_choose;
		// "%c%*[^\n]%*c" �ؼ�
		// 1) %c : ���� �ϳ��� �а� option_choice�� ����
		// 2) %*[^\n] : \n�� ������ �������� ���ڵ��� �а� ������.
		// 3) %*c : ���� �ϳ��� �а� ������.
		while (scanf("%c%*[^\n]%*c", &option_choose) != 1)
			printf("Please try again.\n>> ");

		// ���� ���Ḧ ���� flag
		bool found = false;

		// ������ �ɼǿ� ���� �빮��/�ҹ��ڷ� ����
		// options���� ������ �ɼ��� index�� ã�� operations���� �ش� index�� �Լ� ����
		for (int i = 0; i < n; ++i)
		{
			if (options[i] == option_choose) {
				(*(operations[i]))(input); // �Լ� ����
				found = true; // ���� ���Ḧ ���� true�� ����
				break;
			}
		}

		if (found)
			break;
		else
			printf("Wrong Input, try again\n");
	}

	// ���ڿ� ���
	printf("%s\n", input);

	return 0;
}

// ���ڿ� ��ü�� �빮��/�ҹ��ڷ� �����ϴ� �Լ�
void update_string(char* str, int(*ptr_func)(int))
{
	while (*str != '\0')
	{
		*str = (*ptr_func)(*str);
		str++;
	}
};

// ���ڿ� ��ü�� �빮�ڷ� �����ϴ� �Լ�
void ToUpper(char* str)
{
	update_string(str, toupper);
};

// ���ڿ� ��ü�� �ҹ��ڷ� �����ϴ� �Լ�
void ToLower(char* str)
{
	update_string(str, tolower);
};

// ���ڿ� ��ü���� �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� ��ȯ
void Transpose(char* str)
{
	while (*str != '\0') {
		if (*str <= 'Z')
			update_string(str, tolower);
		else
			update_string(str, toupper);
		str++;
	}
};