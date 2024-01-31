// 15.12 �޸� �ٸ��� alignof, alignas
/*
	alignof ������
	�ǿ������� �޸� ����(alignment) ���� ��ȯ

	alignas ������
	������ ��ü�� �޸� ����(alignment) ���� ����
*/

// [����] �����Ϸ� ����
// 1. �ַ�� ��Ŭ�� �� [Properties] ���� 
// 2. [Configuration Properties] - [General] - [C Language Standard]���� 'ISO C11' ����

#include <stdio.h>
#include <stdalign.h>

int main(void)
{
	// char�� ���� : 1
	printf("Alignment of char = %zu\n\n", alignof(char));

	// char�� ������ �������� ���� ���
	char ca;
	printf("&ca : %p %lld\n", &ca, ((long long)&ca) % 8);
	printf("&ca : %p %lld\n", &ca, ((long long)&ca) % 16);
	printf("\n");

	// char�� ������ 8(double)�� ������ ���
	char _Alignas(double) cb;
	printf("&cb : %p %lld\n", &cb, ((long long)&cb) % 8);
	printf("&cb : %p %lld\n", &cb, ((long long)&cb) % 16);
	printf("\n");

	// char�� ������ 16���� ������ ���
	char alignas(16) cc;
	printf("&cc : %p %lld\n", &cc, ((long long)&cc) % 8);
	printf("&cc : %p %lld\n", &cc, ((long long)&cc) % 16);

	return 0;
}