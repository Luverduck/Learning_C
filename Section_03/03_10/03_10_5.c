// 3.10 ������
/*
	�ڷ��� char
	ũ�� 1[Byte]�� ���� �ڷ������� ���� �ϳ��� �����ϴ� �� ����ϴ� �ڷ���
	�����Ϸ��� ���ڿ� �����ϴ� ASCII �ڵ� ��ȣ�� 8[bit] ������ ��ȯ�Ͽ� ����

	�ڷ��� char�� Escape Sequence
	�ڷ��� char�� Escape Sequence�� ���� �� ����� �� �ִ�.
	- �齽���� ǥ�� : https://learn.microsoft.com/ko-kr/cpp/c-language/escape-sequences?view=msvc-170
	- ASCII �ڵ� ��ȣ : https://en.cppreference.com/w/cpp/language/ascii
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// �ݾ� �Է±�
	float salary;
	// �ʱ� �Է� ���� $______�� ǥ���ϸ� Ŀ���� ���� ù ��° _�� ��ġ�ϵ���
	printf("$______\b\b\b\b\b\b");
	scanf("%f", &salary); 
	// Return value ignored : 'scnaf'.
	// scanf�� ��ȯ��(�Է¹��� ��)�� �ٸ� ��򰡿� ������� ���� �� �߻��ϴ� ��� 

	return 0;
}