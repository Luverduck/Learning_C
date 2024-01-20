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

struct Name receive_input();
struct Name count_characters(struct Name name);
void show_result(const struct Name name);

int main(void)
{
	// ����ü ���� ����
	struct Name user_name;

	// �̸��� �Է¹޾� ����ü�� ����
	user_name = receive_input();

	// ����ü�� ���� �� ���
	user_name = count_characters(user_name);

	// �̸��� ���� �� ���
	show_result(user_name);

	return 0;
}

// �̸��� �Է¹޾� ����ü�� ����
struct Name receive_input() 
{
	struct Name name_temp;

	int flag;

	printf("Input your first name :\n>> ");

	flag = scanf("%[^\n]%*c", name_temp.first);
	if (flag != 1)
		printf("Wrong input");

	printf("Input your last name :\n>> ");

	flag = scanf("%[^\n]%*c", name_temp.last);
	if (flag != 1)
		printf("Wrong input");

	return name_temp;
};

// ����ü�� ���� �� ���
struct Name count_characters(struct Name name_in_fnc) 
{
	name_in_fnc.num = strlen(name_in_fnc.first) + strlen(name_in_fnc.last);

	return name_in_fnc;
};

// �̸��� ���� �� ���
void show_result(const struct Name name_in_fnc)
{
	printf("Hi, %s %s. Your name has %d characters.\n", name_in_fnc.first, name_in_fnc.last, name_in_fnc.num);
};