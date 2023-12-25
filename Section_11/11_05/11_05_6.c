// 11.5 ���ڿ��� ����ϴ� �پ��� �����

#include <stdio.h>

void custom_put_1(const char* str);
int custom_put_2(const char* str);

int main(void)
{
	// ����� ���� ��� �Լ�
	custom_put_1("Just ");
	custom_put_1("do it!");

	printf("%d\n", custom_put_2("12345"));

	return 0;
}

// �� �ٲ��� ���� �ʴ� ��� �Լ�
void custom_put_1(const char* str)
{
	while (*str) // while (*str != '\0') 
	{
		putchar(*str++);
	};
};

// �� �ٲ��� �ϴ� ��� �Լ�
int custom_put_2(const char* str)
{
	int count = 0;
	while (*str)
	{
		putchar(*str++);
		count++;
	};
	putchar('\n');

	return count;
};
