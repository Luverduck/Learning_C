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

	// 1) �͸� ����ü�� ����ϴ� ���
	struct Person
	{
		int id;
		struct { char first[40]; char last[40]; };
	};

	// ����ü ���� ����
	struct Person person = { 123, { "Bill", "Gates" } };

	// ������� ����
	puts(person.first);

	return 0;
}