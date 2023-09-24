// 2.6 printf �Լ��� �⺻���� ����

// printf �Լ��� stdio.h(ǥ�� ����� ���̺귯��)�� ���Ե� �Լ��̴�.
// ���� printf �Լ��� ����ϱ� ���ؼ��� �ݵ�� stdio.h�� ���Խ��Ѿ� �Ѵ�.
#include <stdio.h>
int main(void)
{
	// ���� ������ (Format specifier)
	// �Է¹��� �μ��� ��¿� ǥ���ϱ� ���� ���¸� �����ϴ� ���ڿ�
	int x, y, z;
	x = 1;
	y = 2;
	z = x + y;
	
	// %i : ����(integer)
	printf("The x is %i\n", x);
	
	// %d : ������(decimal)
	printf("The y is %i\n", y);

	// �տ������� ������� �Է� �μ����� ���� �����ڿ� �������� ����Ѵ�.
	printf("%i + %i = %i\n", x, y, z);

	// �ۼ�Ʈ ��ȣ(%)�� ����ϱ� ���ؼ��� ��� ���ڿ��� %%�� �����ؾ� �Ѵ�.
	printf("The percent is %i%%", z);

	return 0;
}