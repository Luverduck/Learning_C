// 8.4 ����� �������̽��� ģ���ϰ�

#include <stdio.h>
int main(void)
{
	// TO DO : 'y'�� �Է��ϸ� ī��Ʈ +1, 'n'�� �Է��ϸ� �����ϴ� ���α׷�
	int count = 0;
	char ch;

	while (1) {
		// �ȳ� ���� ���
		printf("Current count is %d. Continue? (y/n)\n", count);
		
		// �Է�
		ch = getchar();

		// �б� ó��
		if (ch == 'n') {
			break;
		}
		else if (ch == 'y') {
			count++;
		}
		else {
			printf("Please input y or n.\n");
		}
		
		// �Է� ���� ���� (�Է� ���ۿ��� ���� ���ڰ� �Է��� ��(\n)�� ������ �ݺ�)
		while ((ch = getchar()) != '\n') {
			continue;
		}
	}

	return 0;
}