// 11.5 ���ڿ��� ����ϴ� �پ��� �����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// scanf �Լ��� ������ �߰��ϰų� ������ ������ ���ڿ����� �д´�.
	char input[100] = "";

	// input : "Just do it, do it!\n"
	// �Է� ���ۿ��� ���� �������� ���ڿ� "Just"�� �а� input�� �����Ѵ�.
	int result = scanf("%10s", input);
	printf("%s\n", input); // ��� : Just

	// �Է� ���ۿ��� 1���� ���ڿ� "d"�� �а� input�� �����Ѵ�.
	result = scanf("%1s", input);
	printf("%s\n", input);

	return 0;
}