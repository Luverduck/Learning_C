// 12.12 ���� ���� ��� ����
/*
	�ǻ� ���� (Pseudo-Random Number)
	�ǻ� ���� ���� �˰��� �����Ǵ� ��
	�õ�(seed)��� �ϴ� �ʱⰪ�� ���� ������ �����ȴ�.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include "my_rand.h"

int main(void)
{
	// ���� ���� ��� ����
	my_srand((unsigned int)time(NULL));

	for (int i = 0; i < 10; ++i) {
		printf("%d\n", my_rand() % 6 + 1);
	};

	return 0;
}