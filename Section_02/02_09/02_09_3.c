// 2.9 �Լ� �����
/*
	�Լ��� ���� ��
	�Լ� ����� ����(function declaration)�� ��
	�Լ� �ٵ� �Լ��� ��ü���� ����� ����(function defitnition)�ؾ� �Ѵ�.

	�Լ��� ����� ���ÿ� ���� �� �� ������ �Լ��� ����� ���Ǹ� �и��� ���� �ִ�.
	�Լ��� ����� ���Ǹ� �и��� ��� �Լ��� ����θ� �Լ� ����(function prototype)�̶� �Ѵ�.

	�Լ��� ����� ���ǰ� �и��Ǿ��ִ� ���
	main �Լ����� ���� ������ �Լ��� ȣ���ϱ� ���ؼ��� 
	main �Լ� �տ��� ������ �Լ��� ������ �� main �Լ� �ڿ��� �����ؾ� �Ѵ�.
*/

// ii) �Լ� ���� ���� (function declaration)
void say_hello_prototype(); // �Լ� ���� (function prototype)

#include <stdio.h>
int main(void)
{
	// ������ say_hello_prototype �Լ� ȣ��
	say_hello_prototype();

	return 0;
}

// ii) �Լ� ������ ��ü������ ���� (function definition)
void say_hello_prototype()
{
	printf("Hello World!\n");
	printf("Hello World!\n");
};
