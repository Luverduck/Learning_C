// 7.10 ���� ����� break�� continue
/*
	continue : continue ������ �ڵ带 �������� �ʰ� ���� ������ �ǳʶڴ�.
	break : break ������ �ڵ带 �������� �ʰ� ������ Ż���Ѵ�.
*/

#include <stdio.h>
int main(void)
{
	/* for������ continue ��� */
	for (int count = 0; count < 10; ++count) {
		int c = getchar();
		// �Է��� ���� �� 'a'�� ������� �ʴ´�.
		if (c == 'a')
			continue;
		putchar(c);
	}

	return 0;
}