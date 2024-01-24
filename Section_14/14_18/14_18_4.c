// 14.18 ������
/*
	������ (Enumerated Type)
	������ ����� ������ ��Ÿ���� �ڷ���
*/

#include <stdio.h>
int main(void)
{
	// �������� Ȱ��
	enum Levels
	{
		LOW = 100,
		MIDDLE = 500,
		HIGH = 2000
	};

	int score = 800;

	if (score > HIGH)
		printf("High score!\n");
	else if (score > MIDDLE)
		printf("Good job.\n");
	else if (score > LOW)
		printf("Not bad.\n");
	else
		printf("Do your best.\n");

	return 0;
}