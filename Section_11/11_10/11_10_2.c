// 11.10 ����� �μ�
/*
	����� �μ� (Command-Line Argument)
	���α׷��� ������ �� �ü���� ����� ���� ���� �Է¹��� �μ�
	- ����� �μ��� ���� `�� ��`�� ����
	- 0��° ����� �μ��� ������ ���α׷��� �̸�(���)

	main �Լ�
	���α׷��� ������ �� �ش� ���α׷��� ������ �θ� ���μ����� ���� ȣ��Ǵ� �Լ�
	1) ����� �μ� ���� main �Լ� ȣ��
	int main() {   body   };
	int main(void) {   body  };

	2) ����� �μ� ���� main �Լ� ȣ��
	int main( int argc, char* argv[] ) {   body   };
	- argc : �μ� ���� (arguments count)
	- argv : �μ� ���� (arguments vector)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[])
{
	// Visual Studio ������ ����� �μ� ����
	if (argc < 3)
		printf("Wrong usage of %s\n", argv[0]);
	else
	{
		int times = atoi(argv[1]);

		for (int i = 0; i < times; ++i)
			puts(argv[2]);
	}

	return 0;
};