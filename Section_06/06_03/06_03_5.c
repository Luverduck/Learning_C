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
	// common mistake
	// 1) �߰�ȣ ���翡 ���� ���� ����
	int i = 0;
	while (i < 3)
		printf("%d\n", i);
		i++;

	return 0;
}