// 16.8 �̸� ���ǵ� ��ũ�ε�, #line, #error
/*
	�̸� ���ǵ� ��ũ�ε�
	__FILE__ 	��ó���� ������ �ҽ� ������ �̸�(���)
	__DATE__	��ó���� ������ ����
	__TIME__	��ó���� ������ �ð�
	__LINE__	��ó���� ������ �� ��ȣ
	__func__	��ó���� ������ �Լ��� �̸�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("%s\n", __FILE__);
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);
	printf("%d\n", __LINE__);
	printf("%s\n", __func__);

	return 0;
}