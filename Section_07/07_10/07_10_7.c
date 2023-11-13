// 7.10 ���� ����� break�� continue
/*
	continue : continue ������ �ڵ带 �������� �ʰ� ���� ������ �ǳʶڴ�.
	break : break ������ �ڵ带 �������� �ʰ� ������ Ż���Ѵ�.
*/

#include <stdio.h>
int main(void)
{

	char ch;

	while ((ch = getchar()) != '\n') {
		
		// Ư�� ��쿡�� �������� �ʴ� ��� (���͸�)
		if (ch == 'a')
			continue;
		putchar(ch);

		// Ư�� ��쿡�� �����ϴ� ���
		if (ch != 'a')
			printf(ch);
	}

	return 0;
}