// 16.7 ���ǿ� ���� �ٸ��� �������ϱ�
/*
	��ó�� ������ #ifdef, ifndef
	��ũ���� ���� ���ο� ���� �ٸ� ��ó���� �����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define REPORT

int sum(int x, int y)
{
	int result = 0;
	for (int i = x; i <= y; ++i)
	{
		result += i;

#ifdef REPORT
		printf("%d %d\n", result, i);
	}
#endif

}

int main()
{
	printf("\n%d \n", sum(1, 10));

	return 0;
};