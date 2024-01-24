// 14.22 �Լ� �������� ��� ���

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h> // toupper(), tolower()

// ���ڿ��� ��� �빮�ڷ� �ٲٴ� �Լ�
void ToUpper(char* str)
{
	while (*str) // ( *str != NULL )
	{
		*str = toupper(*str);
		str++;
	}
}

// ���ڿ��� ��� �ҹ��ڷ� �ٲٴ� �Լ�
void ToLower(char* str) // ( *str != NULL )
{
	while (*str)
	{
		*str = tolower(*str);
		str++;
	}
}

int main(void)
{
	// ��ȯ�� ���ڿ� ����
	char str[] = "Hello, World!";

	// �Լ� ������ ���� �� �ʱ�ȭ
	void (*ptr_func)(char*) = NULL;

	// �Լ� �������� ���� �빮�� ��ȯ �Լ��� �ּҷ� �ʱ�ȭ
	ptr_func = &ToUpper;

	// �빮�� ��ȯ �Լ� ���� �� ��� 
	printf("String literal %lld\n", (long long)("Hello, World!"));
	printf("Function Pointer %lld\n", (long long)ToUpper);
	printf("Variable %lld\n", (long long)str);

	// �빮�� ��ȯ �Լ� ����
	(*ptr_func)(str);

	// �빮�� ��ȯ �Լ� ���� �� ���
	printf("ToUpper %s\n", str);

	// �Լ� �������� ���� �ҹ��� ��ȯ �Լ��� �ּҷ� �ʱ�ȭ
	ptr_func = &ToLower;

	// �ҹ��� ��ȯ �Լ� ���� �� ���
	printf("String literal %lld\n", (long long)("Hello, World!"));
	printf("Function Pointer %lld\n", (long long)ToUpper);
	printf("Variable %lld\n", (long long)str);

	// �ҹ��� ��ȯ �Լ� ����
	(*ptr_func)(str);

	// �ҹ��� ��ȯ �Լ� ���� �� ���
	printf("ToUpper %s\n", str);

	return 0;
}