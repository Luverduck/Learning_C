// 2.10 ����� ����
/*
	����� �ֿ� ����Ű
	- ����� ���� / ���� / �����
	  [F5] : Debugging ����
	  [Shift] + [F5] : Debugging ����
	  [Ctrl] + [Shift] + [F5] : Debugging �����
	  [Alt] + [Num *] : ���� ������ �ڵ� �������� �̵� (���� ���� ���� �ڵ��� ��ġ)

	- ����� Step �̵�
	  [F5] : ���� Breakpoint�� �̵�
	  [F11] : �Լ� ȣ�� �������� �Լ� ���η� �̵��Ѵ�.
	  [F10] : ���� �������� �̵��Ѵ�.
	  [Shift] + [F11] : �Լ��� ������ �����ϰ� �Լ��� ȣ���� �������� ���ư���.
*/

#include <stdio.h>

void say_hello(void);

int main(void)
{
	int x, y, z;

	x = 1;
	y = 20;
	z = 3;

	say_hello();

	return 0;
}

void say_hello(void) {
	printf("Hello World!");
};