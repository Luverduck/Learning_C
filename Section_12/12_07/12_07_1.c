// 12.7 ���� ������ ���� ����
/*
	���� ���� ���� ���� (Static Variable with Block Scope)
	Static with no linkage Class�� ���ϴ� ����
	- ���� �ð� : static
	- ���� ���� : block
	- ���� ���� : none
	- ���� ��ġ : ������ ���� �Ǵ� BSS ����
*/

#include <stdio.h>

int main(void)
{
	// ���� ���� ���� ������ ����

	// ���� �ȿ��� static Ű����� �����Ѵ�.
	{
		// static Ű����� ����
		static int i = 0;
	}
	return 0;
}