// 8.5 ���ڿ� ���ڸ� ��� �Է¹ޱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��� �Լ�
void display(char ch, int lines, int width);
// ���� ch�� �� lines �ٿ� ���ļ� �� �ٿ� width�� �� ���
// scanf �Լ��� ����
// - �μ��� ������ŭ �Էµ� ������ �Է��� ��ٸ���. => ������ ������ŭ�� �μ��� ���� ������ �Է��� ��� (���� �ڵ尡 ������� ����)  

int main(void)
{
	char c;
	int rows, cols;

	// ���� 1-1) �Է��� �д� �κ� �и� (c)
	while ((c = getchar()) != '\n') 
	{
		// ���� 1-2) �Է��� �д� �κ� �и� (rows, cols)
		scanf("%d %d", &rows, &cols);

		display(c, rows, cols);

		// ���� 2) �Է� ���� ����
		while (getchar() != '\n') {
			continue;
		}

		printf("Input another character and two integers :\n");
		printf("Press Enter to quit.\n");
	};

	return 0;
}

void display(char ch, int lines, int width)
{
	int row, col;

	for (row = 1; row <= lines; ++row) {
		for (col = 1; col <= width; ++col) {
			putchar(ch);
		}
		printf("\n");
	}
}