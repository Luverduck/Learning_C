// 12.7 ��� ������ ���� ����
/*
	��� ���� ���� ���� (Static Variable with Block Scope)
	Static with no linkage Class�� ���ϴ� ����
	- ���� �ð� : static
	- ���� ���� : block
	- ���� ���� : none
	- ���� ��ġ : ������ ���� �Ǵ� BSS ����
*/

#include <stdio.h>

void func()
{
	static int i = 0;
	printf("%d\n", i);
	i++;
};

int main(void)
{
	// ��� ���� ���� ������ Ư¡

	// 1. ���α׷��� ����� ������ �޸𸮸� �����Ѵ�. (static storage duration)
	func(); // ��� : 0
	func(); // ��� : 1

	return 0;
}