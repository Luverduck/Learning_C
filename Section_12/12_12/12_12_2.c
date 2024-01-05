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
	// srand �Լ�
	// �Է� �õ�(seed)�� ���� 0���� RAND_MAX ������ �ǻ� ���� ��ȯ
	// void srand(unsigned int seed);
	// - seed : ���� �õ� (Random Seed)

	// srand �Լ� ����
	srand(2);

	for (int i = 0; i < 10; ++i) {
		printf("%d\n", rand());
	};

	return 0;
}