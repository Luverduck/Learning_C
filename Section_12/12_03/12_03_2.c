// 12.3 ������ ������ ���� ����, ��ü�� ���� �ð�
/*
	[����] ���̺�(label)�� ����
	���̺�(label)�� �ش� ���̺���� ���Ե� �Լ� �������� ������.
*/

#include <stdio.h>

int func(int var_arg);

int main()
{
	func(3);
	
	return 0;
};

int func(int var_arg)
{
	int var_local = 0;

	for (int i = 0; i < 10; ++i)
	{
		int temp = var_arg * i;

		var_local *= temp;

		if (i == 5) {
			goto hello;
		};
	};

hello: // hello�� func �Լ� �������� ������.
	printf("Hello, World!");

	return 0;
};