// 16.7 ���ǿ� ���� �ٸ��� �������ϱ�
/*
	��ó�� ������ #undef
	#define���� ���ǵ� �ĺ��ڸ� �����Ѵ�.
*/

#include <stdio.h>

#define LIMIT 400
#undef LIMIT

int main()
{
	printf("%d\n", LIMIT); // Error
	return 0;
};