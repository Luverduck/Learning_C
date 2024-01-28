// 15.1 ��Ʈ���� �� ������
/*
	~ : ��Ʈ�� 1�̸� 0��, 0�̸� 1�� ���� (��Ʈ NOT ����)
	& : �����ϴ� �� ��Ʈ�� ��� 1�̸� 1�� ��ȯ (��Ʈ AND ����)
	| : �����ϴ� �� ��Ʈ �߿��� �ϳ��� 1�̸� 1�� ��ȯ (��Ʈ OR ����)
	^ : �����ϴ� �� ��Ʈ�� ���� �ٸ��� 1�� ��ȯ (��Ʈ XOR ����)
*/

#include <stdio.h>
int main(void)
{
	// ��Ʈ NOT ����
	unsigned char num = 15;
	printf("num\t: %hhu\n", num);
	printf("~num\t: %hhu\n", ~num);

	unsigned char a = 6;
	unsigned char b = 5;
	
	// ��Ʈ AND ����
	printf("a & b\t: %hhu\n", a & b);

	// ��Ʈ OR ����
	printf("a | b\t: %hhu\n", a | b);

	// ��Ʈ XOR ����
	printf("a ^ b\t : %hhu\n", a ^ b);

	return 0;
}