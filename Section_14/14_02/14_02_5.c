// 14.2 ����ü�� �⺻���� ��� ���
/*
	����ü���� ����ϴ� ������
	��Ʈ ������ (.)		: ����ü ������ ���� �ش� ����ü�� ����� ����
	ȭ��ǥ ������ (->)	: ����ü �����͸� ���� �ش� ����ü�� ����� ����
*/

// ����ü�� ����
struct Person
{
	char name[41];
	float height;
	float weight;
	int age;
};

#include <stdio.h>

int main(void)
{
	// ����ü ���� ����
	struct Person genie = { "Genie", 188.0, 75.0, 55 };

	// ����ü�� ������ ���� ����
	struct Person* someone = &genie;

	// i) ����ü ������ ����� �����ϴ� ���
	genie.height = 190.0;

	// ii) ����ü �����ͷ� ����� �����ϴ� ���
	someone->height = 190.0;

	// [����] ����ü�� ������ ������ �������Ͽ� �����ϴ� ���
	(*someone).height = 190;

	return 0;
}