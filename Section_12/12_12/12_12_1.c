// 12.12 ���� ���� ��� ����
/*
	�ǻ� ���� (Pseudo-Random Number)
	�ǻ� ���� ���� �˰��� �����Ǵ� ��
	�õ�(seed)��� �ϴ� �ʱⰪ�� ���� ������ �����ȴ�.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> // rand(), srand()
#include <time.h> // time()

int main(void)
{
	// rand �Լ�
	// 0���� RAND_MAX ������ �ǻ� ���� ��ȯ
	// - RAND_MAX�� ���� ������ ���� �ٸ����� ���� 32767(0x7fff)�� ���ǵǾ� �ִ�.
	// int rand(void);

	// rand �Լ� ����
	for (int i = 0; i < 10; ++i) {
		printf("%d\n", rand());
	};

	return 0;
}