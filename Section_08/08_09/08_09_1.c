// 8.9 �ؽ�Ʈ ���� �б�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int c;
	FILE* file = NULL;
	char file_name[] = "my_file.txt";

	// ���ϰ��� ��Ʈ���� ����.
	file = fopen(file_name, "r");

	if (file == NULL) { // ��Ʈ�� ���⸦ ������ ���
		printf("Fail to open file.\n");
		exit(1); // ����(1)�� ó���ϰ� ���α׷��� �����Ѵ�.
		// ���� 1�� ���α׷� ����� ǥ�õǴ� �ؽ�Ʈ���� ~ exited code [����]�� �ǹ��Ѵ�.
	}

	while ((c = getc(file)) != EOF) {
		putchar(c);
	};

	// ���ϰ��� ��Ʈ���� �ݴ´�.
	fclose(file);

	return 0;
}