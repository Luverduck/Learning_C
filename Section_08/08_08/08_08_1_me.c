// 8.8 �޴� ����� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	while (1) {
		// �ȳ� �ؽ�Ʈ
		printf("Enter the letter of your choice.\n");
		printf("a. avenger\tb. beep\n");
		printf("c. count\tq. quit\n");

		// �Է�
		char c;
		scanf("%c", &c);
		
		// �б� ó��
		switch (c) 
		{
			case 'a':
				printf("Avengers assemble!\n");
				break;
			case 'b' :
				printf("%c", 7);
				break;
			case 'c' :
				printf("Enter an integer.\n");
				int n;
				scanf("%d", &n);
				for (int i = 1; i <= n; ++i) {
					printf("%d\n", i);
				}
				break;
			case 'q' :
				break;
		}

		// �Է� ���� ����
		while (getchar() != '\n') {
			continue;
		}

		// ���� ����
		if (c == '\n') {
			break;
		};
	}

	return 0;
}