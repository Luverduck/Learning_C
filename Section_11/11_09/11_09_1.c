// 11.9 ���� �Լ��� ���ڿ��� ����ϱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h> // toupper(), ispunct(), ...

void toupper_str(char* str);

int main(void)
{
	// TO DO : �Է� ���ڿ��� ��� ���ڸ� �빮�ڷ� ����
	char input[100];

	// �Է� (gets�� ���� ���� '\n'�� �� ���� '\0'�� ġȯ)
	gets(input, sizeof(input));

	// �Է� ���ڿ��� ��� ���ڸ� �빮�ڷ� ����
	toupper_str(input);

	// ����� ���ڿ� ���
	puts(input);

	return 0;
}

void toupper_str(char* str)
{
	// ���ڿ��� ���� ��ġ�� ���� �� ���� '\0'�� �ƴ� ���ȸ� �ݺ�
	while (*str != '\0') {
		*str = toupper(*str); // ���� ��ġ�� ���ڸ� �빮�ڷ� ����
		str++; // ���� ��ġ�� �̵�
	}
};