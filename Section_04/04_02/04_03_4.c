// 4.2 sizeof ������
/*
	����ü(structure)�� sizeof ����
	������ �����ϴ� char �迭�� �޸� ũ�Ⱑ ��ȯ�ȴ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct MyStruct
{
	int i; // 4[Byte]
	float f; // 4[Byte]
};

int main()
{
	printf("%zu\n", sizeof(struct MyStruct));
};