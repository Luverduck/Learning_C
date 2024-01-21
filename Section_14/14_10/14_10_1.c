// 14.10 ���� ���ͷ�
/*
	���� ���ͷ� (Compound Literal)
	���� ���ͷ� ǥ������ ���� �͸��� �迭�̳� ����ü, ����ü�� ������ �� �ִ�.
	( type ){ initializer-list };
	- type : ������ ��ü Ÿ��
	- initializer-list : ������ ��ü�� �ʱⰪ

	���� ���ͷ��� Ư¡
	���� ���ͷ��� l-value�� ���еǸ�, �ּҰ��� ������.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 1. ����ü ������ �ٽ� �Ҵ� �� �� �ִ�.
	struct Book
	{
		char title[41];
		char author[31];
		float price;
	};

	// ����ü ���� �� ��� �ʱ�ȭ
	struct Book my_book = { "Crime and Punishment", "Fyodor Dostoyevsky", 11.25f };

	// Syntax Error
	// my_book = { "Alice in Wonderland", "Lewis Carroll", 20.3f };

	// ���� ���ͷ��� ����Ͽ� ����ü ������ �ٽ� �Ҵ� �� �� �ִ�.
	my_book = (struct Book){ "Alice in Wonderland", "Lewis Carroll", 20.3f };

	return 0;
}