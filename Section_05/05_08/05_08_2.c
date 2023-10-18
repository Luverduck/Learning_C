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
	// 1���� 10���� ���
	
	// ���� ����
	printf("prefix operation\n");
	int count_prefix = 0;
	while (count_prefix < 10) {
		printf("%d ", ++count_prefix); // ��� : 1 2 3 4 5 6 7 8 9 10
	}

	printf("\n\n");

	// ���� ����
	printf("postfix operation\n");
	int count_postfix = 0;
	while (count_postfix < 10) {
		printf("%d ", count_postfix++); // ��� : 0 1 2 3 4 5 6 7 8 9
	}

	printf("\n\n");

	return 0;
}