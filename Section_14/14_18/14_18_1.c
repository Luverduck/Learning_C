// 14.18 ������
/*
	������ (Enumerated Type)
	������ ����� ������ ��Ÿ���� �ڷ���
*/

#include <stdio.h>
int main(void)
{
	// ����� ���� �������� �ʴ� ���
	enum Levels { LOW, MIDDLE, HIGH };

	// ����� ���� �ش� ����� index
	printf("%d\n", LOW);
	printf("%d\n", MIDDLE);
	printf("%d\n", HIGH);

	return 0;
}