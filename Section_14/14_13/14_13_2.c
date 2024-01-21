// 14.13 ����ü�� �迭�� ����ϴ� �Լ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SLEN 101

// å ����ü
struct Book
{
	char name[SLEN];
	char author[SLEN];
};

//  å ������ ����ϴ� �Լ�
void print_books(const struct Book*, int);

int main(void)
{
	// TO DO : ���� �Ҵ� �迭�� ����ϴ� ���
	
	// ����ü �迭 ����
	struct Book* ptr_my_books = (struct Book*)malloc(sizeof(struct Book) * 3);
	if (ptr_my_books == NULL) {
		printf("malloc() failed");
		exit(EXIT_FAILURE);
	};

	// ����ü �迭�� ��� �ʱ�ȭ
	ptr_my_books[0] = (struct Book){ "The Great Gatsby", "F. Scott Fitzgerald" };
	ptr_my_books[1] = (struct Book){ "Hamlet", "Williams Shakesphere" };
	ptr_my_books[2] = (struct Book){ "The Odyssey", "Homer" };
	
	// å ���� ���
	print_books(ptr_my_books, 3);

	// ���� �Ҵ� �޸� ����
	free(ptr_my_books);

	return 0;
}

// å ������ ����ϴ� �Լ�
void print_books(const struct Book* books, int n)
{
	for (int i = 0; i < n; ++i) {
		printf("Book %d : \"%s\" written by \"%s\"\n", i + 1, books[i].name, books[i].author);
	}
};