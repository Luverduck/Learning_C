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
	// ���� ���� ���� ������ Ư¡

	// 2. ������ ���� ���� �ȿ����� �ĺ��ڸ� ����� �� �ִ�. (block scope)
	// - ������ ���� ���� ��
	{ // ���� x�� ���� [START]

		static int x = 1;

		{
			// ������ ���� ���� �ȿ����� �ĺ��� ��� ����
			printf("x = %d\n", x);
		}

	} // ���� x�� ���� [END]

	// - ������ ���� ���� ��
	{

		{ // ���� y�� ���� [START]

			int y = 5;

		} // ���� y�� ���� [END]

		// ������ ���� ���� ���� �ۿ����� �ĺ��� ��� �Ұ���
		// printf("y = %d\n", y);
	}
};