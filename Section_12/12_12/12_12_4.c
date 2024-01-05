// 12.12 ���� ���� ��� ����
/*
	�ǻ� ���� (Pseudo-Random Number)
	�ǻ� ���� ���� �˰��� �����Ǵ� ��
	�õ�(seed)��� �ϴ� �ʱⰪ�� ���� ������ �����ȴ�.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h> // time()

int main(void)
{
	// ���� ���� �˰���
	unsigned int next = 1;

	for (int i = 0; i < 10; ++i) 
	{
		next = next * 1103515245 + 1234;
		next = (unsigned int)(next / 65536) % 32768;
		printf("%d\n", (int)next);
	}

	return 0;
}