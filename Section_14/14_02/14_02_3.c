// 14.2 ����ü�� �⺻���� ��� ���
/*
	����ü ����� ���ÿ� ����ü ���� ����
	struct [�±׸�]
	{
		[��� �ڷ���] [��� �̸�];
		[��� �ڷ���] [��� �̸�];
		...
		[��� �ڷ���] [��� �̸�];
	} [������];
*/

#include <stdio.h>
int main(void)
{
	// ����ü ����� ���ÿ� ����ü ���� ����
	struct Person
	{
		char name[41];
		float height;
		float weight;
		int age;
	} aladin, genie;

	return 0;
}