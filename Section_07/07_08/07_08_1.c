// 7.8 �ܾ� ���� ���� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#define STOP '.'
int main(void)
{
	// TO DO : �Է��� ���ڿ����� ������ ����, �ܾ��� ����, ���� �� ���ϱ�
	/*
		Enter text : 
		[�Է�] Hello world I am here.
		[���] Characters : 17, Words : 5, Line = 1
	*/

	char ch;
	int n_chars = 0;
	int n_words = 0;
	int n_lines = 0;

	// line_flag�� ���� ����
	// - �� �ٲ� ���� ��\n���� ���� �� ���� ���ڿ��� �� �ٲ� ó���� ���� line_flag�� false�� �ٲ۴�.
	bool line_flag = false;

	// word_flag�� ���� ����
	// ���� ���ڸ� ���� �� ���� ���ڿ��� �ܾ� �� ������ ���� word_flag�� false�� �ٲ۴�.
	bool word_flag = false;

	printf("Enter text :\n");

	while ((ch = getchar()) != STOP) {

		// ch�� ���� ���ڰ� �ƴ϶��
		if (!isspace(ch)) { // isspace(ch) == false
			n_chars++; // ���� �� +1
		}

		// ch�� ���� ���ڰ� �ƴϸ鼭 �� �ٲ� ó���� �Ϸ���� ���� ��� (line_flag == false)
		if (!isspace(ch) && !line_flag) { // ( isspace(ch) == false ) && ( line_flag == false )
			n_lines++;
			line_flag = true;
		}

		// ch�� �� �ٲ� ���� '\n'�� ���
		if (ch == '\n') {
			line_flag = false;
		}

		// ch�� ���� ���ڰ� �ƴϸ鼭 �ܾ� �� ���� ó���� �Ϸ���� ���� ��� (word_flag == false)
		if (!isspace(ch) && !word_flag) { // ( isspace(ch) == false ) && ( word_flag == false )
			n_words++;
			word_flag = true;
		}

		// ch�� ���� ������ ���
		if (isspace(ch)) {
			word_flag = false;
		}
	}

	printf("Characters = %d, Words = %d, Line = %d\n", n_chars, n_words, n_lines);

	return 0;
}