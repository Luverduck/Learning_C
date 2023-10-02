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
	char char_literal = 'A';
	printf("char_literal is %c %hhd\n", char_literal, char_literal); // %c�� ���� 'A', %hdd�� ���� 65 ���

	// ������ ���� 65�� ����
	char char_integer = 65;
	printf("char_integer is %c %hhd\n", char_integer, char_integer); // %c�� ���� 'A', %hdd�� ���� 65 ���

	return 0;
}