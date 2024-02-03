// 16.7 ���ǿ� ���� �ٸ��� �������ϱ�
/*
	��ó�� ������ #ifdef, ifndef
	��ũ���� ���� ���ο� ���� �ٸ� ��ó���� �����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void say_hello()
{
#ifdef _WIN64
	printf("Hello, Win64");
#elif _WIN32
	printf("Hello, Win32");
#elif __LINUX_
	printf("Hello, Linux");
#endif
}

int main()
{
	say_hello();

	return 0;
};