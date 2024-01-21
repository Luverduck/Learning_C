// 14.9 ����ü�� �Ҵ� �޸�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc(), free()
#include <string.h> // strlen(), strcmp()

#define SLEN 81

struct Name
{
	char* first;      // �̸�
	char* last;       // ��
	int num;          // ���� ��
};

void receive_input(struct Name* name);        // allocation memory
void count_characters(struct Name* name);
void show_result(const struct Name* name);
void cleanup(struct Name* name);              // free memory

int main(void)
{
	// ����ü ���� ����
	struct Name user_name;
	
	// �̸��� �Է¹޾� ����ü�� ����
	receive_input(&user_name); // getinfo

	// ����ü�� ���� �� ���
	count_characters(&user_name); // makeinfo

	// �̸��� ���� �� ���
	show_result(&user_name);

	// ���� �Ҵ��� �޸� ����
	cleanup(&user_name);

	return 0;
}

void receive_input(struct Name* ptr_name)
{
	// �Է°��� ������ ���� ����
	char temp[SLEN] = { 0, };

	int flag;

	printf("Input your first name :\n>> ");

	flag = scanf("%[^\n]%*c", temp);
	if (flag != 1)
		printf("Wrong input");
	else {
		ptr_name->first = (char*)malloc(strlen(temp) + 1);
		if (ptr_name->first != NULL)
			strcpy(ptr_name->first, temp);
		else
			printf("Malloc() failed");
	}

	printf("Input your last name :\n>> ");

	flag = scanf("%[^\n]%*c", temp);
	if (flag != 1)
		printf("Wrong input");
	else {
		ptr_name->last = (char*)malloc(strlen(temp) + 1);
		if (ptr_name->last != NULL)
			strcpy(ptr_name->last, temp);
		else
			printf("Malloc() failed");
	}
};

void count_characters(struct Name* ptr_name)
{
	ptr_name->num = strlen(ptr_name->first) + strlen(ptr_name->last);
};

void show_result(const struct Name* ptr_name)
{
	printf("Hi, %s %s. Your name has %d characters.\n", ptr_name->first, ptr_name->last, ptr_name->num);
};

void cleanup(struct Name* ptr_name)
{
	free(ptr_name->first);
	free(ptr_name->last);
};