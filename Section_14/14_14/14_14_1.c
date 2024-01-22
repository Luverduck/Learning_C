// 14.14 ����ü ���� ����� ��������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SLEN 101

struct Book
{
	char name[SLEN];
	char author[SLEN];
};

void print_books(const struct Book*, int);
void write_books(const char*, const struct Book*, int);

int main(void)
{
	// ����ü �迭�� ����
	int n = 2;

	// ����ü �迭�� ���� �Ҵ� �� ��� �ʱ�ȭ
	struct Book* my_books = (struct Book*)malloc(sizeof(struct Book) * n);
	if (my_books == NULL) // if ( !my_books )
	{		
		printf("malloc() failed");
		exit(EXIT_FAILURE);
	}
	my_books[0] = (struct Book){ "The Great Gatsby", "F. Scott Fitzgerald" };
	my_books[1] = (struct Book){ "Hamlet", "William Shakespeare" };

	// ����ü �迭�� ��� ���
	print_books(my_books, n);

	// ���Ͽ� ����
	printf("\nWriting to a file.\n");
	write_books("books.txt", my_books, n);

	// ���� �Ҵ� �޸� ����
	free(my_books);
	n = 0;

	printf("Done.\n");

	return 0;
}

// ����ü ���� ���
void print_books(const struct Book* ptr_books, int n)
{
	for (int i = 0; i < n; ++i) 
	{
		printf("Book %d : \"%s\" written by \"%s\"\n", i, ptr_books[i].name, ptr_books[i].author);
	}
};

// ����ü ������ ���Ͽ� '����'
void write_books(const char* filename, const struct Book* ptr_books, int n)
{
	// ���� ��Ʈ���� ����.
	FILE* ptr_file = fopen(filename, "w");
	if (ptr_file == NULL) 
	{
		fprintf(stderr, "Can't open %s file.\n", filename);
		exit(EXIT_FAILURE);
	}

	// ����ü �迭�� ������ ���Ͽ� '����' �Ѵ�.
	fprintf(ptr_file, "%d\n", n);

	// ����ü �迭�� ��Ҹ� ���Ͽ� '����' �Ѵ�.
	for (int i = 0; i < n; ++i) 
	{
		fprintf(ptr_file, "%s\n%s\n", ptr_books[i].name, ptr_books[i].author);
	}

	// ���� ��Ʈ���� �ݴ´�.
	fclose(ptr_file);
};