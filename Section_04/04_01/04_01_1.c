// 4.1 ���ڿ� ������ϱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	// char���� ���� �ϳ��� ������ �� �ִ�.
	char fruit_name;

	printf("What is your favorite fruit?\n");

	// scanf�� �Է¹��� ���� ������ ���� �޸� �ּ�(&)�� ����Ѵ�.
	scanf("%c", &fruit_name);

	printf("You like %c!\n", fruit_name);

	return 0;
};