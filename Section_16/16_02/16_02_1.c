// 16.2 ��ó���� �غ��ϴ� ����
/*
	���� �ܰ� (Translation)
	��ó�� ���� �ҽ� �ڵ忡 �ִ� ���ڸ� �ؼ��Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// ������ ���� (International Characters) ó��
	puts("�ȳ��ϼ���? �ѱ��� ����մϴ�.\n");

	int arr[3] = { 1, 2, 3 };

	// ������ (Digraph Sequence) ó��
	printf("arr<:1:> == %d\n", arr<:1:>);
	// printf("arr[1] == %d\n", arr[1]);

	// ������ (Trigraph Sequence) ó��
	printf("arr?(0??) == %d\n", arr??(0??));
	// printf("arr[0] == %d\n", arr[0]); �� ����

	// �� �ٲ� ó��
	printf("long long long long long \
long long long long long\n");
	//printf("long long long long long long long long long long");
	// [����] �鿩���� �� ��ŭ ����� �ν�
	printf("long long long long long \
	long long long long long\n");

	// ��ū ó�� (space, tab, line break, whitespace character ������ �ϳ��� space�� �ν�)
	int /* a variable to count a number */n = 1;
	// int n = 1;
	// ** ��ū(token)�̶� ������ �ǹ̸� ������ �ּ� ������ �ǹ��Ѵ�.

	return 0;
}