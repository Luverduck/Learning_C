// 14.11 ���༺ �ִ� �迭 ���
/*
	���༺ �ִ� �迭 ��� (Flexible Array Member)
	����ü�� ������ ����� ����� ���̰� �������� ���� �迭
	�ش� �迭 ����� ���� �Ҵ��� ���� ���̸� �����Ӱ� ������ �� �ִ�.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct Flexible
	{
		size_t count;
		double average;
		double values[]; // Flexible Array Member
	};

	// ���� �Ҵ� �޸� ����
	const size_t n = 3;

	// ����ü ������ �迭 ��� ���� �Ҵ�
	struct Flexible* ptr_flexible = (struct Flexible*)malloc(sizeof(struct Flexible) + n * sizeof(double));
	if (ptr_flexible == NULL) exit(EXIT_FAILURE);

	printf("Flexible Array Member\n");
	// ����ü ������ ũ��
	printf("sizeof struct Flexible %zd\n", sizeof(struct Flexible));
	printf("sizeof *ptr_flexible %zd\n", sizeof(*ptr_flexible));
	// ����ü ������ ũ�� + ���� �Ҵ� �޸��� ũ��
	printf("sizeof malloc %zd\n\n", sizeof(struct Flexible) + n * sizeof(double));

	// ����ü ���� ������� �޸� ��ġ
	printf("%lld\n", (long long)ptr_flexible);
	// ����ü ������ ��� count
	printf("%lld\n", (long long)&ptr_flexible->count);
	printf("%zd\n", sizeof(ptr_flexible->count)); // size_t Ÿ���� unsigned long long���� ����
	// ����ü ������ ��� average
	printf("%lld\n", (long long)&ptr_flexible->average);
	// ����ü ������ �迭 ���
	printf("Address of [ptr_flexible->values]\t%lld\n", (long long)&ptr_flexible->values);
	printf("Value of [ptr_flexible->values]\t\t%lld\n", (long long)ptr_flexible->values);
	// ���༺ �ִ� �迭 ����� �ҿ����� �����̹Ƿ� sizeof �����ڷ� ũ�⸦ �� �� ����.
	printf("sizeof [ptr_flexible->values]\t\t%zd\n", sizeof(ptr_flexible->values));

	return 0;
}