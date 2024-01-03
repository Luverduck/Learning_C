// 12.7 ��� ������ ���� ����
/*
	��� ���� ���� ���� (Static Variable with Block Scope)
	Static with no linkage Class�� ���ϴ� ����
	- ���� �ð� : static
	- ���� ���� : block
	- ���� ���� : none
	- ���� ��ġ : ������ ���� �Ǵ� BSS ����
*/

#include <stdio.h>

// �ڵ� ���� ī��Ʈ �Լ�
void count()
{
	int i = 0;
	printf("%lld\t i = %d\n", (long long)&i, i);
	i++;
};

// ��� ���� ���� ���� ī��Ʈ �Լ�
void count_static()
{
	static int i = 0;
	printf("%lld\t i = %d\n", (long long)&i, i);
	i++;
};

// �ڵ� ���� ī��Ʈ �Լ��� ȣ���ϴ� �Լ�
void count_caller()
{
	count();
};

// ��� ���� ���� ���� ī��Ʈ �Լ��� ȣ���ϴ� �Լ�
void count_static_caller()
{
	count_static();
};

int main(void)
{
	// ��� ���� ���� ���� ����

	// �ڵ� ���� ī��Ʈ
	count();
	count();
	count_caller();

	// ��� ���� ���� ���� ī��Ʈ
	count_static();
	count_static();
	count_static_caller();

	return 0;
};