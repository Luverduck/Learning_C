// 7.8 �ܾ� ���� ���� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// TO DO : �Է��� ���ڿ����� ������ ����, �ܾ��� ����, ���� �� ���ϱ�
	/*
		Enter text :
		[�Է�] Hello world I am here.
		[���] Characters = 17, Words = 5, Line = 1
	*/

	char ch;

	int count_character = 0, count_word = 1, count_line = 1;

	printf("Enter text : \n");

	while ((ch = getchar()) != '.') {
		if (ch == ' ') count_word++;
		else if (ch == '\n') count_line++;
		else count_character++;
	}

	printf("Characters = %d, Words = %d, Line = %d\n", count_character, count_word, count_line);

	return 0;
}