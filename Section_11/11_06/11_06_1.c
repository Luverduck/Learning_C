// 11.6 �پ��� ���ڿ� �Լ���
/*
	strlen �Լ�
	���ڿ��� ���� ��ȯ (���ڿ��� �Ҵ�� �޸� ���� �ּҺ��� �� ���� \0������ ����)
	size_t strlen( const char *str );
	- str : ���ڿ�
*/

#include <stdio.h>

void fit_str(char* str, unsigned int size);

int main(void)
{
	// strlen �Լ� ����
	
	// TO DO : ������ ����ŭ�� �տ������� ���ڿ� ���
	char msg[] = "Just, do it!";

	puts(msg);
	printf("Length %d\n", strlen(msg));

	fit_str(msg, 4);

	puts(msg);
	printf("Length %d\n", strlen(msg));

	return 0;
}

void fit_str(char* str, unsigned int size)
{
	if (strlen(str) > size) {
		str[size] = '\0';
	};

	// [me]
	//*(str + limit) = '\0'; // �޸𸮸� ħ���� ����� ����
};