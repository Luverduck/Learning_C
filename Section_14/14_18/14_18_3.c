// 14.18 ������
/*
	������ (Enumerated Type)
	������ ����� ������ ��Ÿ���� �ڷ���
*/

#include <stdio.h>
int main(void)
{
	// ����� ���� �����ϴ� ���
	enum Levels
	{
		LOW,
		MIDDLE = 300,
		HIGH
	};

	// ����� ���� ������ ��
	printf("%d\n", LOW);
	printf("%d\n", MIDDLE);
	printf("%d\n", HIGH);

	return 0;
}