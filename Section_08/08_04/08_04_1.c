// 8.4 ����� �������̽��� ģ���ϰ�

#include <stdio.h>
int main(void)
{
	// TO DO : 'y'�� �Է��ϸ� ī��Ʈ +1, 'n'�� �Է��ϸ� �����ϴ� ���α׷�
	int count = 0;

	while (1) {
		printf("Current count is %d. Continue? (y/n)\n", count);
		
		if (getchar() == 'n') {
			break;
		}
		else if (getchar() == 'y') {
			count++;
		}
		else {
			printf("Please input y or n.\n");
		}
		
		// �Է� ���ۿ��� ���� ���ڰ� �Է��� ��(\n)�� ������ �ݺ� (�Է� ���� ����)
		while (getchar() == '\n') {
			continue;
		}
	}

	return 0;
}