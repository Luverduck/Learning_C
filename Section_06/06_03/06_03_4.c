// 6.3 ���� ���� ���� while
/*
	while���� ����
	while ( expression ) {
		statement
	}
*/

#include <stdio.h>
int main(void)
{
	// finite loop
	// 2) i�� �ʱⰪ�� 5���� Ŀ�� loop�� �������� ���ϴ� ���
	int i = 10;
	while (++i < 5) { // false
		printf("Hi\n");
	}

	return 0;
}