// 6.5 ��ǰ� ����
/*
	���� ǥ���� (Relational Expression)
	���� �����ڷ� ��Ÿ�� ǥ����
	1(true) �Ǵ� 0(false)�� ���� ���´�.
*/

#include <stdio.h>
int main(void)
{
	// while���� ���� Ż�� ���� 2)
	int i = -5;
	while (i) // i�� ���� 0�� �� �� ���� Ż��
		printf("%d is true\n", i++); // ������ �ݺ��� ������ i�� ���� 1�� ����

	printf("%d is false\n", i);

	return 0;
}