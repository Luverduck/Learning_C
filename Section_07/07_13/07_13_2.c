// 7.13 goto�� ���ϴ� ���

#include <stdio.h>
int main(void)
{
	/* loop */
	char ch;
/*
read: ch = getchar();
	putchar(ch);
	if (ch == '.') goto quit;
quit:
*/

	// while���� break ���
	while (1)
	{
		ch = getchar();
		putchar(ch);
		if (ch == '.') break;
	}

	return 0;
}