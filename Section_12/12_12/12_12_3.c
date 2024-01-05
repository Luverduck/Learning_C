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
	// time �Լ�
	// time_t time(time_t * second);
	// - second : ȯ���� �ð�[��]�� ������ �ּ�
	
	// srand �Լ��� time �Լ� ���� ����
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 10; ++i) {
		printf("%d\n", rand());
	};

	return 0;
}