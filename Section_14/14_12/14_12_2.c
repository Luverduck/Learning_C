// 14.12 �͸� ����ü
/*
	�͸� ����ü (Anonymous Structure)
	��ø ����ü�� ����� ����� �̸��� ���� ����ü
	- ��ø ����ü (Nested Structure) : �ϳ��� ����ü�� ����� �ٸ� ����ü�� ���� ����ü
*/

#include <stdio.h>
int main(void)
{
	// �͸� ����ü�� ����
	// - ��ø ����ü���� �� ���� ����� ������ �� �ִ�.

	// 2) �Ϲ����� ����ü�� ����ϴ� ���
	struct Name
	{
		char first[40];
		char last[40];
	};

	struct Person
	{
		int id;
		struct Name name;
	};

	// ����ü ���� ����
	struct Person person = { 123, { "Steve", "Wozniak" } };

	// ������� ����
	puts(person.name.first);

	return 0;
}