// 12.8 ���� ������ �ܺ� ����
/*
	�ܺ� ����� ���� ���� (Static Variable with External Linkage)
	Static with external linkage Class�� ���ϴ� ����
	- ���� �ð� : static
	- ���� ���� : file
	- ���� ���� : external
	- ���� ��ġ : ������ ���� �Ǵ� BSS ����
*/

#include <stdio.h>

extern int i;

void func()
{
	printf("%d\n", i);
	i++;
};

int main(void)
{
	// �ܺ� ����� ���� ������ Ư¡

	// 1. ���α׷��� ����� ������ �޸𸮸� �����Ѵ�. (static storage duration)
	func(); // ��� : 0
	func(); // ��� : 1

	return 0;
}