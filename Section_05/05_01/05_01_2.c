// 5.1 �ݺ� �������� ù ����
/*
	while��
	���Ǻΰ� true�� ���ȸ� �ݺ�
*/

#include <stdio.h>
int main(void)
{
	int n = 1;

	while (n < 11) { // n�� 11���� ���� ���ȸ� �ݺ�
		printf("%d\n", n);
		n = n + 1;
	}
	
	return 0;
}