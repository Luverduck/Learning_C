// 6.16 �迭�� ��Ÿ�� ����
/*
	�迭(Array)
	���� �ڷ����� ��ҵ�� �̷���� �ڷ� ����
	���ӵ� �ּ��� �޸� ������ �Ҵ�
	�ε���(index)�� ���� �迭�� Ư�� ��ġ�� �ִ� ��ҿ� ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// �迭�� �����
	int array_int[3] = { 1, 3, 4 };

	// �Է� �Լ� scanf()�� ���� �迭�� �� ��� �ʱ�ȭ
	// �迭�� i��° ����� �ּҰ��� ���� �ش� �ּҿ� ����� ���� ���� ����
	scanf("%d", &array_int[0]); // 0��° ��ҿ� ���Ͽ� scanf("%d", array_int); �ε� �ۼ��� �� �ִ� ( array_int = &array_int[0] )
	scanf("%d", &array_int[1]);
	scanf("%d", &array_int[2]);

	// ��� �Լ� printf()�� ���� �迭�� �� ��� ���
	// �迭�� �ε��� ������ ������ []�� ���� �ش� ��ҿ� ����� �� ���
	printf("%d", array_int[0]);
	printf("%d", array_int[1]);
	printf("%d", array_int[2]);

	return 0;
}