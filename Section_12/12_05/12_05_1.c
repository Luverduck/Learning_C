// 12.5 �ڵ� ����
/*
	Automatic Storage Class
	- ���� �ð� : automatic
	- ���� : block
	- ���� : ����
*/

#include <stdio.h>
int main(void)
{
	// �ڵ� ������ Ư¡

	// 1. auto Ű����� �����ϸ�, Ű���带 ������ �� �ִ�. ���� �ݵ�� ���� �ʱ�ȭ�ؾ� �Ѵ�.
	// - auto Ű����� ����
	auto int x = 0;
	// - auto Ű���� ����
	int y = 0;

	// 2. ��� �ȿ��� ��� �ۿ� �ִ� �ڵ� ������ �ĺ��ڸ� ����� �� �ִ�.
	int i = 1;

	{
		printf("i = %d\n", i);
	}

	// 3. ��� �Ȱ� �ۿ� ������ �ĺ��ڰ� ������ �� ��� �ȿ��� ��� ���� �ĺ��ڴ� ���� ó�� �ȴ�. (name hiding)
	int j = 2;

	printf("j %lld\n", (long long)&j);

	{
		int j = 10; // name hiding
		printf("j %lld\n", (long long)&j);
	}

	return 0;
}