// 12.3 ������ ������ ���� ����, ��ü�� ���� �ð�

#include <stdio.h>

// �ܺ� ����� ���� ���� => ��� ����
extern int var_el;

void testLinkage()
{
	printf("Do something called\n");
	printf("%d\n", var_el);
};