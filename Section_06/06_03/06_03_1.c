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
	// infinite loop
	// 1) i���� ��ȭ�� ��� loop�� Ż������ ���ϴ� ���
	int i = 1;
	while (i < 5) { // true
		printf("Hi!\n");
	}
	return 0;
}