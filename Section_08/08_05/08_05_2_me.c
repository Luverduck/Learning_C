// 8.5 ���ڿ� ���ڸ� ��� �Է¹ޱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��� �Լ�
void display(char ch, int lines, int width);
// ���� ch�� �� lines �ٿ� ���ļ� �� �ٿ� width�� �� ���
// - �� ��° ������� �߻��ϴ� ���� ������ �ذ�

int main(void)
{
	char c;
	int rows, cols;

	while (1) {

		scanf("%c %d %d", &c, &rows, &cols);

		display(c, rows, cols);

		if (c == '\n') {
			break;
		}
	};

	return 0;
}

void display(char ch, int lines, int width) {
	for (int i = 0; i < lines; ++i) {
		for (int j = 0; j < width; ++j) {
			printf("%c", ch);
		}
		printf("\n");
	}
}