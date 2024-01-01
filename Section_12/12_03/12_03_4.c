// 12.3 ������ ������ ���� ����, ��ü�� ���� �ð�
/*
	��ü�� ���� �ð� (storage duration)
	��ü�� ���� �����ϱ� ���� �Ҵ���� �޸𸮸� �����ϰ� �ִ� �ð�

	���� ��� ���� (static storage duration)
	��� ������ ���α׷��� ���ۺ��� ��������� ���
	- ���� ��� ������ ���� ������ ���� ����(static variable)��� �Ѵ�.

	�ڵ� ��� ���� (auto storage duration)
	��� ������ �� ���ۺ��� �� �������� ���
	- �ڵ� ��� ������ ���� ������ �ڵ� ����(automatic variable)��� �Ѵ�.

	�Ҵ� ��� ���� (allocated storage duration)
	��� ������ ����ڰ� ���� �޸𸮸� �Ҵ��� �������� ������ ���������� ���
*/

#include <stdio.h>

void count()
{
	// �ڵ� ���� : ����� ���ۺ��� �������� �Ҵ�� �޸� ����
	int count = 0;
	printf("count = %d\n", count);
	count++;
};

void count_static() 
{
	// ���� ���� : ���α׷��� ���� ������ �Ҵ�� �޸� ����
	static int count = 0;
	printf("count = %d\n", count);
	count++;
}

int main()
{
	count();

	count();

	count_static();

	count_static();

	return 0;
};