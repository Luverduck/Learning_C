// 11.5 ���ڿ��� ����ϴ� �پ��� �����

#include <stdio.h>
int main(void)
{
	// puts �Լ��� �� ���� \0�� �߰��� ������ �μ��� �Էµ� �ּ��� ���ڿ��� �д´�.
	char str[] = "String array initialized";
	const char* ptr = "A pointer initialized";

	puts(&str[3]);

	puts(ptr + 3);

	return 0;
}