// 7.10 ���� ����� break�� continue
/*
	continue : continue ������ �ڵ带 �������� �ʰ� ���� ������ �ǳʶڴ�.
	break : break ������ �ڵ带 �������� �ʰ� ������ Ż���Ѵ�.
*/

#include <stdio.h>
int main(void)
{
	/* continue */
	for (int i = 0; i < 10; ++i) {
		if (i == 5) 
			continue;
		printf("%d ", i);
	}

	printf("\n");

	return 0;
}