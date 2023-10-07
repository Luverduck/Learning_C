// 3.13 ����
/*
	����(_Bool)
	- C99 ���� �߰��� �� �ڷ���
	- ���� ������ ����
	
	_Bool (ǥ����)
	���� 0 �Ǵ� 1�� ���� ǥ�� (0�� false, 1�� true�� ����)

	bool (stdbool.h�� ������ ���)
	���� 0 �Ǵ� 1�� ���� ǥ�� (0�� false, 1�� true�� ����)
	Ű���� false, true�� ���� ǥ�� (��½� false / true�� ���� ���ڷ� ǥ��)
*/

#include <stdio.h>
#include <stdbool.h> // �Ҹ������� ���� ��� ����
int main(void)
{
	// ǥ����
	_Bool boolean;

	// ���� �� �ִ� ��
	boolean = 1; // true
	boolean = 0; // false

	// ũ�� : 1[Byte]
	printf("%u\n", sizeof(_Bool)); // ��� : 1

	// bool
	bool boolean2, boolean3;

	// ���� �� �ִ� ��
	// 1) ����
	boolean2 = 1; // true
	boolean2 = 0; // false
	// 2) Ű����
	boolean3 = true; // true
	boolean3 = false; // false

	// ��°�
	printf("%d %d", boolean2, boolean3); // ��� : 0 0

	return 0;
}