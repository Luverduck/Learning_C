// 5.11 �ڷ��� ��ȯ
/*
	����� �ڷ��� ��ȯ (Explicit Type Conversion)
	�ڷ����� ���� ��ȯ
*/

#include <stdio.h>
int main(void)
{
	double d = (double)1.23f;
	
	int i = 1.6 + 1.7;
	printf("%d\n", i);
	// 1.6 + 1.7 = 3.3 ���� �� �Ҽ��� ���ϰ� ����Ǿ� 3�� ���

	int j = (int)1.6 + (int)1.7;
	printf("%d\n", j);
	// 1.6�� 1.7 ������ int�� ��ȯ�ϸ� �Ҽ����� ����Ǿ� 1
	// ������ ������ ���� 1 + 1 = 2�� ����� 2 ���

	return 0;
}