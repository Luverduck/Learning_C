// 3.10 ������
/*
	�ڷ��� char
	ũ�� 1[Byte]�� ���� �ڷ������� ���� �ϳ��� �����ϴ� �� ����ϴ� �ڷ���
	�����Ϸ��� ���ڿ� �����ϴ� ASCII �ڵ� ��ȣ�� 8[bit] ������ ��ȯ�Ͽ� ����

	�ڷ��� char ��½� ���� ������
	- ���ڷ� ��½� : %c
	- ���ڷ� ��½� : %hhd
	  (* ���⼭ h�� half�� ���ڷ� �ڷ��� int�� ũ�� 4[Byte] ���� half�� half�� ���� ���� 1[Byte]�̱� ����)
*/
#include <stdio.h>
int main(void)
{
	// ������ ���� 'A'�� ����
	char char_literal_1 = 'A';
	printf("char_literal_1 is %c %hhd\n", char_literal_1, char_literal_1); // %c�� ���� 'A', %hdd�� ���� 65 ���

	// ������ ���� '*'�� ����
	char char_literal_2 = '*';
	printf("char_literal_2 is %c %hhd\n", char_literal_2, char_literal_2); // %c�� ���� '*', %hdd�� ���� 42 ���

	return 0;
}