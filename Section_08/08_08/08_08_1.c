// 8.8 �޴� ����� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> // exit(1)

char get_choice(void);
char get_first_char(void);
int get_integer(void);
void count(void);

int main(void)
{
	int user_choice;

	// �Է�
	while ((user_choice = get_choice()) != 'q') {
		// �б� ó��
		switch (user_choice)
		{
			case 'a':
				printf("Avengers assemble!\n");
				break;
			case 'b':
				putchar('\a'); // Bell
				break;
			case 'c':
				count();
				break;
			case 'q':
				break;
			default :
				printf("Error with %d.\n", user_choice);
				exit(1); // ���α׷��� ������������ �����
				break;
		}
	}

	return 0;
}

// ������� �Է��� �޴� �Լ�
char get_choice(void) {
	// �ȳ� �ؽ�Ʈ
	printf("Enter the letter of your choice.\n");
	printf("a. avenger\tb. beep\n");
	printf("c. count\tq. quit\n");
	// ����� �Է�
	char user_choice;
	user_choice = get_first_char();
	// ����� �Է��� a, b, c �Ǵ� q�� ������ �ݺ�
	while ((user_choice < 'a' || user_choice > 'c') && user_choice != 'q') {
		printf("Please try again.\n");
		user_choice = get_first_char();
	}
	// ��ȯ
	return user_choice;
};

// ������� �Է¿��� ù ���ڸ� �����ϴ� �Լ�
char get_first_char(void) {
	// �Է� ���ۿ��� ù ���ڸ� ��ȯ�Ͽ� ch�� ����
	char ch;
	ch = getchar();
	// �Է� ���� ����
	while (getchar() != '\n') {
		continue;
	};
	// ��ȯ
	return ch;
};

// ����ڷκ��� ������ �Է¹޴� �Լ�
int get_integer(void) {
	// �Է��� �ϳ��� ������ ������ �Է��� �ݺ�
	int input;
	char c;
	while (scanf("%d", &input) != 1) {
		while ((c = getchar()) != '\n') {
			putchar(c);
		}
		printf("is not an integer.\nPlease try again.");
	}
	// ��ȯ
	return input;
};

// 1���� �Է¹��� �������� ī��Ʈ
void count(void) {
	// �ȳ� �ؽ�Ʈ
	printf("Enter an integer :\n");

	// �Է�
	int n;
	n = get_integer();

	// ���
	for (int i = 1; i <= n; ++i) {
		printf("%d\n", i);
	}
}