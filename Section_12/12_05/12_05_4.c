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

	// 3. ��� �Ȱ� �ۿ� ������ �ĺ��ڰ� ������ ��, ��� �ȿ��� ��� ���� �ĺ��ڴ� ���� ó�� �ȴ�.
	int i = 2;

	printf("i %lld\n", (long long)&i);    // ��� : 856600212932

	{
		int i = 10; // name hiding
		printf("i %lld\n", (long long)&i);  // ��� : 856600212964
	}

	return 0;
}