// 4.1 ���ڿ� ������ϱ�
/*
	- ���� ����(char)�� �̾ ���� ���ڸ� ���ڿ�(String)�̶� �Ѵ�.
	- ���ڿ� ������ ���� �ϳ��� �����ϴ� char Ÿ���� �迭�� �����Ѵ�.
	- ���ڿ� ����� �� ���� �����ڷ� **%s**�� ����Ѵ�.
	- ���ڿ� ����� �� �μ��� ���ڿ��� �������� ����Ѵ�. 	(���ڿ� ������ ����� ���� ���ּҡ��̱� ����)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	// char Ÿ���� �迭�� ������ ���ڿ� ����
	char fruit_name[40];

	printf("What is your favorite fruit?\n");

	// ���ڿ� ����� �� ���� �����ڷ� %s�� ����Ѵ�.
	// ���ڿ� ����� �� �μ��� ���ڿ��� �������� ����Ѵ�. (���ڿ� ������ ����� ���� �迭�� '�ּ�')
	scanf("%s", fruit_name);

	// ���ڿ��� �Է¹��� �� ���� ������ %s �� ����Ѵ�.
	printf("You like %s!\n", fruit_name);

	return 0;
};