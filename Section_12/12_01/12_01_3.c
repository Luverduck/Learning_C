// 12.1 �޸� ���̾ƿ� �Ⱦ��
/*
	C ���α׷��� �޸� ����

	3. BSS ���� (Block Started by Symbol segment)**
	�ʱ�ȭ���� ���� ���� ������ �����ϴ� ����
	- 0���� �ʱ�ȭ �Ǿ��ų� ��������� �ʱ�ȭ���� ���� ���� ���� / ���� ���� ����
*/

#include <stdio.h>

// �ʱ�ȭ���� ���� ���� ����
int var_global_uninitialized;

int main(void)
{
	// �ʱ�ȭ���� ���� ���� ����
	printf("%lld\n", (long long)&var_global_uninitialized);

	return 0;
}