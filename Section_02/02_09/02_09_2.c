// 2.9 �Լ� �����
/*
	�Լ��� ���� ��
	�Լ� ����� ����(function declaration)�� ��
	�Լ� �ٵ� �Լ��� ��ü���� ����� ����(function defitnition)�ؾ� �Ѵ�.
	
	�Լ��� ����� ���ÿ� ���� �� �� ������ �Լ��� ����� ���Ǹ� �и��� ���� �ִ�.
	�Լ��� ����� ���Ǹ� �и��� ��� �Լ��� ����θ� �Լ� ����(function prototype)�̶� �Ѵ�.

	�Լ��� ����� ���ÿ� ���ǵ� ���
	main �Լ����� ���� ������ �Լ��� ȣ���ϱ� ���ؼ��� 
	main �Լ� �տ� ���� ������ �Լ��� ��ġ�ϱ⸸ �ϸ� �ȴ�.
*/

// i) ���ο� �Լ� ���� �� ����
void say_hello(void) // �Լ� ���� (function declaration)
{ // ��ü���� ���� ���� (function definition)
	printf("Hello World!\n");
	printf("Hello World!\n");
};

#include <stdio.h>
int main(void)
{
	// ������ say_hello �Լ� ȣ��
	say_hello();

	return 0;
}