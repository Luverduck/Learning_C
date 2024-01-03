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

void func()
{
	int i = 0;
	printf("%d\n", i);
	i++;
};

int main(void)
{
	// �ڵ� ������ Ư¡

	// 1. auto Ű����� �����ϸ�, Ű���带 ������ �� �ִ�. ���� �ݵ�� ���� �ʱ�ȭ�ؾ� �Ѵ�.
	// - auto Ű����� ����
	auto int x = 0;
	// - auto Ű���� ����
	int y = 0;

	// 2. ������ ���� ��� �ȿ����� �ĺ��ڸ� ����� �� �ִ�. (block scope)
	// - ������ ���� ��� ��
	{ // ���� i�� ���� [START]
		auto int i = 1;
		{
			// ������ ���� ��� �ȿ����� �ĺ��� ��� ����
			printf("i = %d\n", i);
		}
	} // ���� i�� ���� [END]

	// - ������ ���� ��� �� (automatic storage duration)
	{
		{ // ���� j�� ���� [START]
			int j = 5;
		} // ���� j�� ���� [END]
		// ������ ���� ��� �ۿ����� �ĺ��� ��� �Ұ���
		// printf("j = %d\n", j);
	}

	// 3. ������ ���� ����� ������ �ڵ����� �޸𸮸� �����Ѵ�. (automatic storage duration)
	func(); // ��� : 0
	func(); // ��� : 0

	// 4. ��� �Ȱ� �ۿ� ������ �ĺ��ڰ� ������ �� ��� �ȿ��� ��� ���� �ĺ��ڴ� ���� ó�� �ȴ�. (name hiding)
	int k = 2;

	printf("k %lld\n", (long long)&k);    // ��� : 856600212932

	{
		int j = 10; // name hiding
		printf("k %lld\n", (long long)&k);  // ��� : 856600212964
	}

	// 5. ����� ���� ��� �ڵ� ������ ������ ����(Statement)�� ���ۺ��� ������ ��(;)������ �ȴ�.
	for (int l = 0; l < 10; ++l) 
		printf("%d\n", l);

	return 0;
}