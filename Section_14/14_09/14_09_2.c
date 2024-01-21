// 14.9 ����ü�� �Ҵ� �޸�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc(), free()
#include <string.h> // strlen(), strcmp()

#define SLEN 81

struct Name
{
	char* first;
	char* last;
	int num;
};

int main(void)
{
	// ����ü ���� ����
	struct Name name = { "Hyun-Yong", "Eom" };
	printf("%s %s\n", name.first, name.last);
	// first�� last�� ����� �ּҴ� Code ������ ����� ���ڿ� "Hyun-Yong"�� "Eom"�� �ּ��̴�.

	// ���ڿ��� ������ ���� ����
	char buffer[SLEN] = { 0, };
	// ������ ���ڿ��� ������ ����
	int flag = scanf("%[^\n]%*c", buffer);
	// ���� �Ҵ� �� �ش� �޸� �ּҸ� first�� ����
	name.first = (char*)malloc(strlen(buffer) + 1);
	if (name.first != NULL) // ���� �Ҵ翡 �����ϸ�
		strcpy(name.first, buffer); // buffer�� ���ڿ��� first�� ����
	printf("%s %s", name.first, name.last);

	return 0;
}