// 6.18 ���� �ȿ��� �Լ��� ��ȯ�� ����ϱ�
/*
	TO DO : ����ڷκ��� �Է¹��� ������ ���� ���ϱ�
	ex) 3�� 4�� �Է��ϸ� 3�� 4������ ���ϴ� ���α׷�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �Լ��� prototype ����
int compute_power(int base, int exp);

int main(void)
{
	int base, exp, result;
	// int i;

	while (scanf("%d %d", &base, &exp) == 2)
	{
		// base�� exp�� ���� �Է¹޾� result�� ��ȯ�ϴ� �Լ� ����
		result = compute_power(base, exp);

		printf("Result = %d\n", result);
	}
	return 0;
}

int compute_power(int base, int exp) {
	// main() �Լ����� ���ǵ� i�� result�� main() �Լ��� ����(scope) �������� ����� �� �ִ�.
	int i, result; // power �Լ� ������ i�� result�� ����ϱ� ���ؼ��� ���� �����ؾ� �Ѵ�.

	result = 1;
	for (i = 0; i < exp; ++i) {
		result *= base; // base�� exp�� ���Ѵ�.
	}

	return result;
};