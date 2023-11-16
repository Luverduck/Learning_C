// 8.2 ������ ��
/*
	������ �� (End of File)
	������ �ҽ�(����, ��Ʈ��)�� ���� ��Ÿ���� ����

	�Է� �Լ��� EOF
	���۸� ����ϴ� �Է� �Լ� getchar()�� �Է¹��� ���� unsigned char�� �а� signed int�� ��ȯ�Ѵ�.
	����, �Է� ������ ���� �����ϰų� ������ �߻��� ��� EOF�� �ش��ϴ� ���� -1�� ��ȯ�Ѵ�.
	- ASCII �ڵ��� �ڵ� ��ȣ�� 0���� 255�̹Ƿ� unsigned char�� �ս� ���� ������ �� �ִ�.

	EOF�� ������ �Է��ϴ� ���
	- UNIX �迭�� ��� [Ctrl]+[D] �Է� �� [Enter]
	- Windows �迭�� ��� [Ctrl]+[Z] �Է� �� [Enter]
*/

#include <stdio.h>
int main(void)
{
	int ch;

	while ((ch = getchar()) != EOF) {
		putchar(ch);
	}

	return 0;
}