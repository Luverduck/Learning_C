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
	// 1) loop�� ������ ������ i���� 1�� �����Ͽ� 5�� �Ǿ��� �� loop�� Ż���ϴ� ���
	int i = 1;
	while (i < 5) { // false
		printf("i before = %d\n", i);
		i++;
		printf("i after = %d\n\n", i);
	}

	return 0;
}