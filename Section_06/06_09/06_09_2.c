// 6.9 for���� ������

#include <stdio.h>
int main(void)
{
	// 7. �������� ǥ������ �������� �� ���
	for (int i = 2, n = 2; n < 10; ) {
		n = n * i;
		printf("%d ", n);
	};

	// 8. ���� ����
	/*for ( ; ; ) {
		printf("Hi!\n");
	};*/

	return 0;
}