// 7.10 ���� ����� break�� continue
/*
	continue : continue ������ �ڵ带 �������� �ʰ� ���� ������ �ǳʶڴ�.
	break : break ������ �ڵ带 �������� �ʰ� ������ Ż���Ѵ�.
*/

#include <stdio.h>
int main(void)
{

	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			/*if (j == 5)
				break;*/
			printf("(%d, %d) ", i, j);
		}
		printf("\n");
	}
}