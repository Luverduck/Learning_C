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
};

int main()
{
	// ���� ����� ���� ������ Ư¡

	// 3. ���� �ۿ��� �ܺ� ������ �� ����. (internal linkage)
	func();             // ��� : 0
	printf("%d\n", i);  // ��� : 0

	return 0;
};