// 11.9 ���� �Լ��� ���ڿ��� ����ϱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h> // toupper(), ispunct(), ...

int count_punct(char* str);

int main(void)
{
	// TO DO : �Է� ���ڿ����� ���� ��ȣ�� ���� ���ϱ�
	char input[100];

	// �Է� (gets�� ���� ���� '\n'�� �� ���� '\0'�� ġȯ)
	gets(input, sizeof(input));

	// �Է� ���ڿ����� ���� ��ȣ�� ���� ��ȯ
	int result = count_punct(input);

	// ����� ���ڿ� ���
	printf("%d\n", result);

	return 0;
}

int count_punct(char* str) 
{
	// ���� ��ȣ�� ������ 0���� �ʱ�ȭ
	int count = 0;
	// ���ڿ��� ���� ��ġ�� ���� �� ���� '\0'�� �ƴ� ���ȸ� �ݺ�
	while (*str != '\0') {
		// ���� ��ġ�� ���ڰ� ���� ��ȣ�� ���
		if (ispunct(*str) == 0) {
			count++; // ���� ��ȣ�� ���� ����
		}
		str++;
	}

	return count;
};