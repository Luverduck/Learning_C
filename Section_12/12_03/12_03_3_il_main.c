// 12.3 ������ ������ ���� ����, ��ü�� ���� �ð�

#include <stdio.h>

// ���� ���� (���� ����)
static int var_il;

int main()
{
	var_il = 10;

	testLinkage();

	printf("%d\n", var_il);

	return 0;
};