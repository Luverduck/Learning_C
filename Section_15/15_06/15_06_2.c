// 15.6 ��Ʈ���� ����Ʈ ������

#include <stdio.h>
#include <stdlib.h>

// ��Ʈ AND ������ &�� ����Ͽ� 10���� �������� 2���� ���·� ���
void print_binary(const char num)
{
	printf("Decimal %d\t== Binary ", num);

	const size_t bits = sizeof(num) * CHAR_BIT;

	for (size_t i = 0; i < bits; ++i)
	{
		// ��Ʈ ����Ʈ ������ ���
		const char mask = 1 << (bits - 1 - i);

		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	};

	printf("\n\n");
};

int main(void)
{
	print_binary(30);

	return 0;
}