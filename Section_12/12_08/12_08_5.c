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

int main()
{
	// �ܺ� ����� ���� ������ Ư¡

	// 3. ���� ���� �ĺ��ڰ� ������ ���� ������� ���� ���� ������ ��ü�� �����Ѵ�. (external linkage)
	func();
	printf("%p\n", &i);

	return 0;
};