// 7.10 ���� ����� break�� continue
/*
	continue : continue ������ �ڵ带 �������� �ʰ� ���� ������ �ǳʶڴ�.
	break : break ������ �ڵ带 �������� �ʰ� ������ Ż���Ѵ�.
*/

#include <stdio.h>
int main(void)
{

	char ch;

	while (1) {
		char ch = getchar();
		
		// Ư���� ��� ���� Ż��
		if (ch == '.') {
			break;
		}

		putchar(ch);
	}

	return 0;
}