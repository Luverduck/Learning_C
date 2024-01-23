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
	// ����ü ����� �ʱ�ȭ�� �޸� ����

	// ����ü ����
	union MyUnion
	{
		int i;
		double d;
		char c;
	};

	// ����ü ���� ����
	union MyUnion uni;

	// ����ü ��� c �ʱ�ȭ
	uni.c = 'A';
	printf("%c %x %d\n", uni.c, (int)uni.c, uni.i);

	// ����ü ��� i �ʱ�ȭ
	uni.i = 0;
	// ����ü ��� c �ʱ�ȭ
	uni.c = 'A';
	printf("%c %x %d\n", uni.c, (int)uni.c, uni.i);

	// ����ü ��� d �ʱ�ȭ
	uni.d = 1.2;

	return 0;
}