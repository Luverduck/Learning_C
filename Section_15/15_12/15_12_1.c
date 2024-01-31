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
	printf("Alignment of char = %zu\n", alignof(char));
	printf("Alignment of Array = %zu\n", alignof(float[10]));
	printf("Alignment of Structure = %zu\n", alignof(struct { char c; int n; }));

	return 0;
}