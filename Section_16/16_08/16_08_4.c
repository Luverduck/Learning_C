// 16.8 �̸� ���ǵ� ��ũ�ε�, #line, #error
/*
	��ó�� ���ù� #error
	���� ������ ������ �߻���Ű�� ���� �޽����� ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
#if __LINE__ != 10
#error �� ��ȣ�� 10�� �ƴմϴ�.
#endif

	return 0;
}