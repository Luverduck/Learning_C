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
	// 2) ���ǹ� �ٷ� ���� �����ݷ�(;)�� ���� statement�� ������� �ʴ� ���
	int i = 0;
	while (i++ < 3); // null statement
		printf("%d\n", i);

	return 0;
}