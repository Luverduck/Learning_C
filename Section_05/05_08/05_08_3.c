// 5.8 ����, ���� ������
/*
	���� ������
	++	: �ǿ������� ���� 1��ŭ ������Ŵ
	--	: �ǿ������� ���� 1��ŭ ���ҽ�Ŵ

	���� �������� ���� ����� ���� ����
	���� ����(postfix operation) : �ǿ������� ���� ���� �Ǵ� ���ҽ�Ų ��, ������ ����
	���� ����(prefix operation) : ������ ������ ��, �ǿ������� ���� ���� �Ǵ� ���ҽ�Ŵ
*/

#include <stdio.h>
int main(void)
{
	int i = 1, j = 1;
	int i_prefix, j_postfix;

	i_prefix = ++i;
	j_postfix = j++;

	printf("%d %d\n", i, j);
	printf("%d %d\n", i_prefix, j_postfix);

	return 0;
}