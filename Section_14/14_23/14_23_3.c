// 14.23 �ڷ������� ������ �ٿ��ִ� typedef
/*
	����� typedef
	������ �����ϴ� �ڷ����� ��Ī�� �����Ѵ�.
*/

#include <stdio.h>

// �迭 ����
char arr[3] = { 'A', 'B', 'C' };

// �Լ� ������ ����� ���� 3�� char �迭�� �����͸� ��ȯ�ϴ� �Լ�
char(*func1())[3]
{
	return &arr;
};

// �Լ� ������ ���� (typedef�� ������� ���� ���)
char(*(*ptr_func1))[3] = func1;

// 1. �Լ� �������� �ڷ����� �����Ͽ� �Լ� ������ ����
// ���� 3�� char �迭�� ����Ű�� ������ �ڷ����� ��Ī�� FPTR�� ����
typedef char(*FPTR())[3];
typedef char(*(*(PTR_FPTR)))[3];
// �Լ� �������� ���� (typedef�� ����� ���)
FPTR* ptr_func = func1;
PTR_FPTR ptr_func = func1;

// 2. �Լ� �������� �ڷ����� �����Ͽ� �Լ� ����
// - ���� 3�� char �迭�� ����Ű�� ������ �ڷ����� ��Ī�� FPTR�� ����
typedef char TDARR[3];
// - �Լ��� ���� (typedef�� ����� ���)
TDARR* func2()
{
	return &arr;
}

int main(void)
{

	return 0;
}