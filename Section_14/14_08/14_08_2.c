// 14.8 ����ü�� �Լ� ��������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NLEN 30

struct Name
{
	char first[NLEN]; // �̸�
	char last[NLEN];  // ��
	int num;          // ���� ��
};

void receive_input(struct Name* name);
void count_characters(struct Name* name);
void show_result(const struct Name* name);

int main(void)
{
	// ����ü ���� ����
	struct Name user_name;

	// �̸��� �Է¹޾� ����ü�� ����
	receive_input(&user_name);

	// ����ü�� ���� �� ���
	count_characters(&user_name);

	// �̸��� ���� �� ���
	show_result(&user_name);

	return 0;
}

// �̸��� �Է¹޾� ����ü�� ����
void receive_input(struct Name* ptr_name)
{
	int flag;

	printf("Input your first name :\n>> ");

	flag = scanf("%[^\n]%*c", ptr_name->first);
	if (flag != 1)
		printf("Wrong input");

	printf("Input your last name :\n>> ");

	flag = scanf("%[^\n]%*c", ptr_name->last);
	if (flag != 1)
		printf("Wrong input");
};

// ����ü�� ���� �� ���
void count_characters(struct Name* ptr_name)
{
	ptr_name->num = strlen(ptr_name->first) + strlen(ptr_name->last);
};

// �̸��� ���� �� ���
void show_result(const struct Name* ptr_name)
{
	printf("Hi, %s %s. Your name has %d characters.\n", ptr_name->first, ptr_name->last, ptr_name->num);
};