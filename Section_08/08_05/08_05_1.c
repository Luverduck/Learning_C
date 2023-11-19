// 8.5 ���ڿ� ���ڸ� ��� �Է¹ޱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��� �Լ�
void display(char ch, int lines, int width);
// ���� ch�� �� lines �ٿ� ���ļ� �� �ٿ� width�� �� ���
// ex) display('A', 3, 2)
// ���� 'A'�� �� �ٴ� 2���� 3�ٷ� ���
// A A
// A A
// A A

int main(void)
{
	char c;
	int rows, cols;

	while (1) 
	{
		scanf("%c %d %d", &c, &rows, &cols);

		display(c, rows, cols);

		if (c == '\n') {
			break;
		}
	};

	return 0;
}

void display(char ch, int lines, int width) 
{
	int row, col;

	for (row = 1; row <= lines; row++) {
		for (col = 1; col <= width; col++) {
			putchar(ch);
		}
		printf("\n");
	}
}