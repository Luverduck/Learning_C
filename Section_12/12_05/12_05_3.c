// 12.5 �ڵ� ����
/*
	�ڵ� ���� (Automatic Variable)
	Automatic Storage Class�� ���ϴ� ����
	- ���� �ð� : automatic
	- ���� ���� : block
	- ���� ���� : none
	- ���� ��ġ : ����(Stack)
*/

#include <stdio.h>

int main(void)
{
	// �ڵ� ������ Ư¡

	// 2. ������ ���� ��� �ȿ����� �ĺ��ڸ� ����� �� �ִ�. (block scope)
	// - ������ ���� ��� ��
	{ // ���� x�� ���� [START]

		auto int x = 1;

		{
			// ������ ���� ��� �ۿ����� �ĺ��� ��� ����
			printf("x = %d\n", x);
		}

	} // ���� x�� ���� [END]

	// - ������ ���� ��� ��
	{

		{ // ���� y�� ���� [START]

			int y = 5;

		} // ���� y�� ���� [END]

		// ������ ���� ��� �ۿ����� �ĺ��� ��� �Ұ���
		// printf("y = %d\n", y);
	}

	return 0;
}