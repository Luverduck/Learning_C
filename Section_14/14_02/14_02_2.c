// 14.2 ����ü�� �⺻���� ��� ���
/*
	����ü ������ ���� �� ����� �ʱ�ȭ
	- ����� ���ÿ� �ʱ�ȭ
	- ����� �ʱ�ȭ �и�
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
	// ����ü ������ ���� �� ����� �ʱ�ȭ

	// - ����� ���ÿ� �ʱ�ȭ
	struct Person p1 = { "Will Smith", 188.0, 75.0, 55 };

	// - ����� �ʱ�ȭ �и�
	struct Person p2;
	strcpy(p2.name, "Mena Massoud"); // ���ڿ� ������ ��� �ʱ�ȭ
	p2.height = 173.0;
	p2.weight = 60.0;
	p2.age = 32;

	// - ������ �ʱ�ȭ(Designated Initializer)
	struct Person p3 = {
		.height = 180.0,
		.name = "Naomi Scott",
		.age = 31,
		.weight = 45
	};

	return 0;
}