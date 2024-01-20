// 14.6 ����ü�� ������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define LEN 20

// �̸�(first name)�� ��(last name)���� ������ �̸�(Name) ����ü
struct Name
{
	char given[LEN];  // first name
	char family[LEN]; // last name
};

// ��ü �̸�(full_name)�� ��ȭ��ȣ(mobile)�� ������ ģ��(Friend) ����ü
struct Friend
{
	struct Name full_name;
	char mobile[LEN];
};

int main(void)
{
	// ����ü�� ũ�� ���
	printf("%zd\n", sizeof(struct Friend));

	// ����ü �迭 ����
	struct Friend my_friend[2] = {
		{ { "Ariana", "Grande" }, "1234-5678" },
		{ { "Taylor", "Swift" }, "6550-8888" }
	};

	// ����ü ������ ����
	struct Friend* girl_friend = NULL;

	// ����ü �迭�� 0��° ����� �ּҸ� ����ü �����Ϳ� ����
	girl_friend = &my_friend[0];

	// ����ü �迭�� 0��° ����� ���(����ü) full_name�� �̸�(given) ���
	printf("%lld %s\n", (long long)girl_friend, girl_friend->full_name.given); // ��� : Ariana

	// ����ü ������ ���� ���� => ����ü �迭�� 1��° ����� �ּ�
	girl_friend++;

	// ����ü �迭�� 1��° ����� ���(����ü) full_name�� �̸�(given) ���
	printf("%lld %s\n", (long long)girl_friend, (*girl_friend).full_name.given); // ��� : Taylor

	return 0;
}