// 7.10 ���� ����� break�� continue
/*
	continue : continue ������ �ڵ带 �������� �ʰ� ���� ������ �ǳʶڴ�.
	break : break ������ �ڵ带 �������� �ʰ� ������ Ż���Ѵ�.
*/

#include <stdio.h>
int main(void)
{
	/* while������ continue ��� */
	int count = 0;
	while (count < 5) {
		int c = getchar();
		// �Է��� ���� �� 'a'�� ��� �� ���ڼ��� ���� �ʴ´�.
		if (c == 'a')
			continue;
		putchar(c);
		count++;
	}

	return 0;
}