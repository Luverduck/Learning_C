// 3.13 �Ҹ����� (Boolean types)
/*
	boolean 
*/

#include <stdio.h>
#include <stdbool.h> // �Ҹ������� ���� ��� ����
int main(void)
{
	// �Ҹ������� ũ��
	printf("%u\n", sizeof(_Bool)); // 1[Byte]

	// �Ҹ�����
	_Bool b1;
	b1 = 0; // false
	b1 = 1; // true

	// �Ҹ������� ���� �����ڴ� ���� ����.
	printf("%d\n", b1); // ��� : 1

	// stdbool.h�� ���Ե� �Ҹ�����
	bool b2, b3;
	b2 = true;
	b3 = false;

	printf("%d %d", b2, b3); // ��� : 1 0

	return 0;
}