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
	// ������ ���� ���� �ȿ��� �ĺ��ڸ� ����� �� �ִ�. (file scope)
	printf("%d\n", i);
};

int main()
{
	// �ܺ� ����� ���� ������ Ư¡
	
	// 2. ������ ���� ���� �ȿ��� �ĺ��ڸ� ����� �� �ִ�. (file scope)
	printf("%d\n", i);

	return 0;
};