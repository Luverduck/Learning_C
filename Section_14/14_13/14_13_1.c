// 14.13 ����ü�� �迭�� ����ϴ� �Լ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SLEN 101

// å ����ü
struct Book
{
	char name[SLEN];
	char author[SLEN];
};

// TO DO : å ������ ����ϴ� �Լ�
void print_books(const struct Book[], int);

int main(void)
{
	// ����ü �迭 ����
	struct Book my_books[3];

	// ����ü �迭�� ��� �ʱ�ȭ
	my_books[0] = (struct Book){ "The Great Gatsby", "F. Scott Fitzgerald" };
	my_books[1] = (struct Book){ "Hamlet", "Williams Shakesphere" };
	my_books[2] = (struct Book){ "The Odyssey", "Homer" };

	// å ���� ���
	print_books(my_books, 3);

	return 0;
}

// TO DO : å ������ ����ϴ� �Լ�
void print_books(const struct Book books[], int n)
{
	for (int i = 0; i < n; ++i) {
		printf("Book %d : \"%s\" written by \"%s\"\n", i + 1, books[i].name, books[i].author);
	}
};