// 14.15 ����ü�� ����
/*
	����ü (Union)
	���� �ڷ����� ��Ұ� �ϳ��� ������ ������Ʈ�� �����ϴ� ������ �ڷ���
	- ����ü�� ��ҵ��� �ϳ��� �޸� ������ �����Ѵ�.
	- ����ü�� ��Ҵ� ��Ʈ ������(`.`)�� ������ �� �ִ�.
*/

#include <stdio.h>
int main(void)
{
	// ����ü�� ũ��� ����ü ����� �޸� �ּ�

	// ����ü ����
	union MyUnion
	{
		int i;
		double d;
		char c;
	};

	// ����ü ���� ����
	union MyUnion uni;

	// ����ü ������ ���� ���
	printf("%zd\n", sizeof(union MyUnion));  // ����ü�� ũ��
	printf("%lld\n", (long long)&uni.i);     // ����ü�� ��� i�� �ּ�
	printf("%lld\n", (long long)&uni.d);     // ����ü�� ��� d�� �ּ�
	printf("%lld\n", (long long)&uni.c);     // ����ü�� ��� c�� �ּ�

	return 0;
}