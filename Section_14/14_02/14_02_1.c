// 14.2 ����ü�� �⺻���� ��� ���
/*
	����ü�� ����
	struct [�±׸�]
	{
		[��� �ڷ���] [��� �̸�];
		[��� �ڷ���] [��� �̸�];
		...
		[��� �ڷ���] [��� �̸�];
	};
*/

#include <stdio.h>
int main(void)
{
	// ����ü�� ����
	struct Person
	{
		char name[41];
		float height;
		float weight;
		int age;
	};

	// �͸� ����ü�� ����
	struct
	{
		char name[41];
		int age;
	};

	return 0;
}