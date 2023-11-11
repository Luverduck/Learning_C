// 7.2 ǥ�� ����� �Լ��� getchar(), putchar() ����
/*
	int getchar(void);
	ǥ�� �Է� ��Ʈ���� ���� ��ġ ���ڸ� �д´�.
	- ǥ�� �Է� ��Ʈ���� ���� ��ġ ���ڸ� unsigned char�� �д´�.
	  �б⿡ �����ϸ� ���� ���ڸ� int�� ��ȯ�Ѵ�.
	  ��, �Է� ������ ���� �����ϰų� ���� �߻��� -1(EOF)�� ��ȯ�Ѵ�.
	  ���� ǥ�� �Է� ��Ʈ���� ������� ��� ���� �Է��� �޴´�.

	int putchar(int ch);
	ǥ�� ��� ��Ʈ���� ���� ��ġ�� ���ڸ� ����.
	- ǥ�� ��� ��Ʈ���� ���� ��ġ�� int ch�� unsigned char�� ��ȯ�Ͽ� ����.
	  ���⿡ �����ϸ� �� ���ڸ� int�� ��ȯ�Ѵ�.
	  ��, ���� �߻��� -1(EOF)�� ��ȯ�Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // getchar(), putchar()
int main()
{
	int ch;

	// getchar(), putchar() ���� 
	// 3) ���ڸ� ���͸��Ͽ� '*'�� �ٲٱ�
	while ((ch = getchar()) != '\n')
	{
		if (ch >= '0' && ch <= '9') {
			ch = '*';
		}
		putchar(ch);
	};

	return 0;
}