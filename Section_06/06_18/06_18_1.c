// 6.18 ���� �ȿ��� �Լ��� ��ȯ�� ����ϱ�
/*
	TO DO : ����ڷκ��� �Է¹��� ������ ���� ���ϱ�
	ex) 3�� 4�� �Է��ϸ� 3�� 4������ ���ϴ� ���α׷�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int base, exp, i, result;

	while (scanf("%d %d", &base, &exp) == 2)
	{
		result = 1;
		for (i = 0; i < exp; ++i) {
			result *= base; // base�� exp�� ���Ѵ�.
		}

		printf("Result = %d\n", result);
	}
	return 0;
}