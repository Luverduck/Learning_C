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
	// ����ü�� �ʱ�ȭ

	// ����ü ����
	union MyUnion
	{
		int i;
		double d;
		char c;
	};

	// ����ü �ʱ�ȭ
	// - ù ��° ��ҷ� �ʱ�ȭ
	union MyUnion uni1 = { 10 };

	// - ������ ��ҷ� �ʱ�ȭ
	union MyUnion uni2 = { .d = 1.2 };

	// - �ٸ� ����ü�� ����
	union MyUnion uni = { .c = 'A' };
	union MyUnion uni3 = uni;

	printf("%d %f %c\n", uni1.i, uni2.d, uni3.c);

	return 0;
}