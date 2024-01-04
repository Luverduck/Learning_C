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
	// 2. ������ ���� ���� �ȿ��� �ĺ��ڸ� ����� �� �ִ�. (file scope)
	printf("%d\n", i);
};

int main()
{
	// ���� ����� ���� ������ Ư¡
	
	// 2. ������ ���� ���� �ȿ��� �ĺ��ڸ� ����� �� �ִ�. (file scope)
	func();             // ��� : 0
	printf("%d\n", i);  // ��� : 0

	return 0;
};