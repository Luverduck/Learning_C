// 14.4 ����ü�� �迭 ��������

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define MAX_TITLE 40
#define MAX_AUTHOR 40
#define MAX_BOOKS 3

char* s_gets(char* str, int n)
{
	char* ret_val;
	char* find;

	// ǥ�� �Է� ��Ʈ������ ���� n��ŭ ���ڿ��� �а� str�� �����Ѵ�.
	ret_val = fgets(str, n, stdin);
	if (ret_val) // ret_val != NULL
	{
		find = strchr(str, '\n');       // ���ڿ� str���� ���� ���� '\n'�� ��ġ ��ȯ
		if (find)                       // '\n'�� ������ ��� ( find != NULL )
			*find = '\0';               // '\n'�� '\0'�� ġȯ ( C����� ���ڿ� ���·� ���� )
		else
			while (getchar() != '\n')   // �Է� ���۸� ����.
				continue;
	}

	return ret_val;
}

struct Book
{
	char title[MAX_TITLE];
	char author[MAX_AUTHOR];
	float price;
};

int main(void)
{
	struct Book library[MAX_BOOKS] = { { "Empty", "Empty", 0.0f }, };

	int count = 0;

	while (1) 
	{
		printf("Input a book title or press [Enter] to stop.\n>>");
		// TO DO : input title
		// TO DO : break if the first character of the input title is '\0'
		// s_gets �Լ��� NULL ��ȯ�� ���� ���� ó��
		if (s_gets(library[count].title, MAX_TITLE) == NULL) break;
		// input title�� ù ���ڰ� '\0'�� ��쿡 ���� ���� ó��
		if (library[count].title[0] == '\0') break; // ���ڿ��� ������ �迭�̹Ƿ� index�� ����

		printf("Input the author.\n>>");
		// TO DO : input author name
		s_gets(library[count].author, MAX_AUTHOR);

		printf("Input the price.\n>>");
		// TO DO : input price
		// TO DO : clear buffer
		int flag = scanf("%f", library[count].price);
		// �Է� ���� ����
		while (getchar() != '\n') continue;

		count++;

		if (count == MAX_BOOKS)
		{
			printf("No more books.\n");
			break;
		};
	}

	printf("\n");

	if (count > 0)
	{
		printf("The list of books :\n");
		for (int index = 0; index < count; ++index) 
		{
			printf("\"%s\" writen by %s: $%.1f\n", library[index].title, library[index].author, library[index].price);
		}
	}
	else 
	{
		printf("No books to show.\n");
	}

	return 0;
}