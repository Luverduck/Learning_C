// 14.2 ����ü�� �⺻���� ��� ���
/*
	typedef �����
	typedef : ������ �ڷ����� ��Ī�� ����
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
	// ����� ���� �ڷ���

	// ������ ����ü�� ����ϴ� ���
	typedef struct Person custom_type1;

	// ���� ����ü�� �����ϴ� ���
	typedef struct Human
	{
		char name[40];
		int age;
	} custom_type2;

	// ���� �͸� ����ü�� �����ϴ� ���
	typedef struct
	{
		char name[40];
		char hobby[100];
	} custom_type3;

	return 0;
}