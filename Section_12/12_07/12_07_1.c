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

void func();

int main(void)
{
	// ��� ���� ���� ������ Ư¡

	// 1. ��� �ȿ��� static Ű����� �����Ѵ�.
	{
		static int x = 0;
	}

	// 2. ������ ���� ��� �ȿ����� �ĺ��ڸ� ����� �� �ִ�. (block scope)
	// - ������ ���� ��� ��
	{ // ���� i�� ���� [START]
		static int i = 1;
		{
			// ������ ���� ��� �ȿ����� �ĺ��� ��� ����
			printf("i = %d\n", i);
		}
	} // ���� i�� ���� [END]
	// - ������ ���� ��� ��
	{
		{ // ���� j�� ���� [START]
			int j = 5;
		} // ���� j�� ���� [END]
		// ������ ���� ��� �ۿ����� �ĺ��� ��� �Ұ���
		// printf("j = %d\n", j);
	}

	// 3. ������ ���� ����� ������ ������ ����� ���� �����Ѵ�. (static storage duration)
	func();
	func();

	return 0;
}

void func()
{
	static int k = 0;
	printf("%d\n", k);
	k++;
};

// 4. ���� ������ �Ű� ������ ����� �� ����.
/*
int func(static int l) {
	// ...
};
*/