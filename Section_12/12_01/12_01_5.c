// 12.1 �޸� ���̾ƿ� �Ⱦ��
/*
	C ���α׷��� �޸� ����

	5. Stack ���� (Stack segment)**
	�Լ��� ȣ�� ����(Call Stack)�� �����ϴ� ����
	- �Լ��� ���޵Ǵ� �Ű� ������ ��
	- ��ȯ�� �Լ��� �޸� �ּ�
	- �Լ� ������ ����ϴ� ���� ����
*/

#include <stdio.h>

void func() {
	// �Լ� func ������ ���� ����
	int i = 123;
	printf("%lld\n", (long long)&i);
}

int main(void)
{
	// �Լ� func ȣ��
	func();

	return 0;
}