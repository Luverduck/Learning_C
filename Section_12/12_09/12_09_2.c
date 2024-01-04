// 12.9 ���� ������ ���� ����
/*
	���� ����� ���� ���� (Static Variable with Internal Linkage)
	Static with internal linkage Class�� ���ϴ� ����
	- ���� �ð� : static
	- ���� ���� : file
	- ���� ���� : internal
	- ���� ��ġ : ������ ���� �Ǵ� BSS ����
*/

#include <stdio.h>

static int i = 0;

void func()
{
	printf("%d\n", i);
	i++;
};

int main(void)
{
	// ���� ����� ���� ������ Ư¡
	
	// 1. ���α׷��� ����� ������ �޸𸮸� �����Ѵ�. (static storage duration)
	func(); // ��� : 0
	func(); // ��� : 1

	return 0;
}