// 2.9 �Լ� �����
/*
	�Լ��� ���(header)�� �ٵ�(body)�� �����ȴ�.
	�Լ� ���(header)�� ��ȯ��, �Լ���, �Ű������� �����ȴ�.
	 - ��ȯ�� : �Լ� ������ ����� ��ȯ�� ���� ����
	 - �Լ��� : �Լ� ȣ��� ����� �Լ��� �̸�
	 - �Ű����� : �Լ� ���࿡ �ʿ��� �μ�
	�Լ� �ٵ�(body)�� �Լ��� �����ϴ� ��ü���� ����� �����Ѵ�.
*/

// �Լ�
void custom_function(void) // �Լ� ���(header)
{	// �Լ� �ٵ�(body) - ����

	printf("Hello World!\n");
	printf("Hello World!\n");
	printf("Hello World!\n");

	// ��ȯ���� void�� ��� return�� ������ �� �ִ�.
	//return;

};	// �Լ� �ٵ�(body) - ��

#include <stdio.h>
int main(void)
{
	// ������ �Լ� ȣ�� (function call)
	custom_function();

	return 0;
}