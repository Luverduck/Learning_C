// 16.8 �̸� ���ǵ� ��ũ�ε�, #line, #error
/*
	��ó�� ���ù� #error
	���� ������ ������ �߻���Ű�� ���� �޽����� ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#if defined(_WIN64) != 1
#error WIN64 ȯ���� �ƴմϴ�.
#endif

int main(void)
{

	return 0;
}