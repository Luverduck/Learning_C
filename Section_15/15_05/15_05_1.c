// 15.5 2�� ���� ǥ���� Ȯ���غ���
/*
	���� ǥ����
	��Ʈ�� ���� ������ ǥ���ϴ� ���
	- ��ȣ ũ�� ǥ�� (Sign-magnitude Representation)
	- 1�� ������ (One��s complement)
	- 2�� ������ (Two��s complement)

	��ȣ ũ�� ǥ�� (Sign-magnitude Representation)
	�ֻ��� ��Ʈ�� ��ȣ�� ��Ÿ���� ��Ʈ�� ����Ѵ�.
	[������] ���� 0�� ���Ͽ� +0�� -0�� ���� �����Ѵ�.

	1�� ������ (One��s complement)
	�ֻ��� ��Ʈ�� ��ȣ�� ��Ÿ���� ��Ʈ�� ����Ѵ�.
	��Ʈ ����(��Ʈ NOT ����)�� ���� ������ ǥ���Ѵ�.
	[������] ���� 0�� ���Ͽ� +0�� -0�� ���� �����Ѵ�.

	2�� ������ (Two��s complement)
	�ֻ��� ��Ʈ�� ��ȣ�� ��Ÿ���� ��Ʈ�� ����Ѵ�.
	��Ʈ ����(��Ʈ NOT ����)�� 1�� ���Ͽ� ������ ǥ���Ѵ�.
	������ �ڷ����� �ִ� ���� ������ �ʰ��� ��� �����÷ο찡 �߻��Ͽ� �ּҰ��� 0�� �ȴ�.
*/

#include <stdio.h>
#include <math.h>

// ��Ʈ AND ������ &�� ����Ͽ� 10���� �������� 2���� ���·� ���
void print_binary(const char num)
{
	printf("Decimal %d\t== Binary ", num);

	const size_t bits = sizeof(num) * 8;

	for (size_t i = 0; i < bits; ++i)
	{
		const char mask = (char)pow(2, (bits - 1 - i));

		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	};

	printf("\n\n");
};

int main(void)
{
	// �Է� ���� 127�� 2������ ���
	print_binary(127);

	// �Է� ���ڿ� ��Ʈ ���� ��� ���
	print_binary(-127);

	// �Է� ���ڿ� ���� 2�� ���� ���
	print_binary(~127 + 1);

	return 0;
}