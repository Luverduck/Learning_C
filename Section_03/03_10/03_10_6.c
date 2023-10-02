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
	// �پ��� Escape Sequence
	printf("AB\tCDEF\n");
	// \t : ���� Tap
	// \n : �ٹٲ�

	printf("\\ \'HA+\' \"Hello\" \?\n");
	// \\ : �齽����(\)�� ���ڷ� ���
	// \' : Ȭ����ǥ(')�� ���ڷ� ���
	// \" : �ֵ���ǥ(")�� ���ڷ� ���
	// \? : ����ǥ(?)�� ���ڷ� ���

	return 0;
}