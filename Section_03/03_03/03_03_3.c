// 3.3 scanf() �Լ��� �⺻���� ����

#include <stdio.h>
int main(void)
{
	// ���� �ʱ�ȭ
	int i = 0;

	// �Է�
	scanf("%d", &i); // & : ampersand

	// ���
	printf("Value is %d\n", i);

	return 0;
}