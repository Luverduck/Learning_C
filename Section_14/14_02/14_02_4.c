// 14.2 ����ü�� �⺻���� ��� ���
/*
	����ü�� ������
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
#include <stdlib.h>

int main(void)
{
	struct Person p1 = { "Will Smith", 188.0, 75.0, 55 };

	// ����ü ������
	struct Person* someone = NULL;

	// ����ü ������ someone�� ����ü ���� p1�� ����Ű�� �ȴ�.
	someone = &p1;

	// ����ü ������ someone�� ������Ʈ�� �������� �����Ѵ�.
	someone = (struct Person*)malloc(sizeof(struct Person));

	// ���� �Ҵ� �޸� ����
	free(someone);

	return 0;
}