// 12.11 �Լ��� ���� ���� �з�
/*
	�Լ��� ���� Ŭ����
	- Static with external linkage (Default)
	- Static with internal linkage

	�ܺ� ���� �Լ� (external function)
	Static with external linkage Class�� ���ϴ� �Լ�
	- ���� �ð� : static
	- ���� ���� : file
	- ���� ���� : external
	- ���� ��ġ : ������ ���� �Ǵ� BSS ����

	���� ���� �Լ� (static function)
	Static with internal linkage Class�� ���ϴ� ����
	- ���� �ð� : static
	- ���� ���� : file
	- ���� ���� : internal
	- ���� ��ġ : ������ ���� �Ǵ� BSS ����
*/

#include <stdio.h>

// �ܺ� ���� �Լ��� ����
void func_external()
{
	printf("external\n");
};

// ���� ���� �Լ��� ����
static void func_static()
{
	printf("external\n");
};

int main(void)
{
	func();

	return 0;
}