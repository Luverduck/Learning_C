// 3.10 ������
/*
	�ڷ��� char
	ũ�� 1[Byte]�� ���� �ڷ������� ���� �ϳ��� �����ϴ� �� ����ϴ� �ڷ���
	�����Ϸ��� ���ڿ� �����ϴ� ASCII �ڵ� ��ȣ�� 8[bit] ������ ��ȯ�Ͽ� ����

	�ڷ��� char�� Escape Sequence
	�ڷ��� char�� Escape Sequence�� ���� �� ����� �� �ִ�.
	- �齽���� ǥ�� : https://learn.microsoft.com/ko-kr/cpp/c-language/escape-sequences?view=msvc-170
	- ASCII �ڵ� ��ȣ : https://en.cppreference.com/w/cpp/language/ascii
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// ������ Escape Sequence '\a'�� ���� (����� ���)
	char char_escape_backslash_alter = '\a';
	printf("%c\n", char_escape_backslash_alter);

	// ������ Escape Sequence '\07'�� ���� (����� ���)
	char char_escape_octal_alter = '\07';
	printf("%c\n", char_escape_octal_alter);

	// ������ 8���� ���� 07�� ���� (����� ���)
	char integer_escape_octal_alter = 07;
	printf("%c\n", integer_escape_octal_alter);

	return 0;
}