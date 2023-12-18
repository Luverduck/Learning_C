// 10.17 ������ ���̸� ���� �� �ִ� �迭
/*
	������ ���̸� ���� �� �ִ� �迭 (Variable-Length Arrays, VLAs)
	�迭�� ���̸� ��Ÿ�� �߿� ���� �� �ִ� �迭
	�迭�� ���̸� ���ϴ� �ð��� ���������� ���� �� �ִ� �迭 
	(�� �� ������ �迭�� ���̴� �ٲ� �� ����)
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	// ���� �Է�
	int n;
	printf("Input array length : ");
	scnaf("%d", &n);

	// �Է¹��� ������ �迭 ���� (Visual Studio������ C90�� �����Ƿ� �������� �ʴ´�)
	float my_arr[n]; // �� �� ������ �迭�� ���̴� �ٲ� �� ����

	// �迭�� ��� �ʱ�ȭ
	for (int i = 0; i < n; ++i) {
		my_arr[i] = (float)i;
	};

	// �迭�� ��� ���
	for (int i = 0; i < n; ++i) {
		printf("%f\n", my_arr[i]);
	};

	return 0;
}