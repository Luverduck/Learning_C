// 14.9 ����ü�� �Ҵ� �޸�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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

	// scanf�� first�� ����� �ּ��� �޸� �� ������ �õ��� ���
	int flag = scanf("%[^\n]%*c", name.first);
	printf("%s %s\n", name.first, name.last);
	// Code ����(Read-Only)�� ����� ���ڿ��� ������ �� �����Ƿ� scanf���� ���� �߻�

	return 0;
}