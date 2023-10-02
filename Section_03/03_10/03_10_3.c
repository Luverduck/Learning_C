// 3.10 ������
/*
	�ڷ��� char
	ũ�� 1[Byte]�� ���� �ڷ������� ���� �ϳ��� �����ϴ� �� ����ϴ� �ڷ���
	�����Ϸ��� ���ڿ� �����ϴ� ASCII �ڵ� ��ȣ�� 8[bit] ������ ��ȯ�Ͽ� ����

	�ڷ��� char�� ����
	�ڷ��� char�� '����'�� �����ϴ� 'ASCII �ڵ� ��ȣ(����)'�� ����
	�ڷ��� char�� ������ ASCII �ڵ� ��ȣ�� ���� ������ �ϴ� �Ͱ� ����.
*/
#include <stdio.h>
int main(void)
{
	// ������ ���� 'A'�� ����
	char char_literal_origin = 'A';
	printf("char_literal_origin is %c %hhd\n", char_literal_origin, char_literal_origin); // %c�� ���� 'A', %hdd�� ���� 65 ���

	// ������ �ڷ��� char�� ���� char_literal_origin�� ���� 1�� ���� ���� ����
	char char_literal_plus = char_literal_origin + 1; // ���� + ����
	printf("char_literal_plus is %c %hhd\n", char_literal_plus, char_literal_plus); // %c�� ���� 'B', %hdd�� ���� 66 ���

	return 0;
}