// 6.13 Ż������ ���� do while
/*
	do ~ while��
	do {
		[���๮]
	} while ( [���ǽ�] );
	* ���๮�� ���� �����Ų �� ���ǽ�(Ż�� ����)�� ���Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// do ~ while���� while���� ����
	// do ~ while���� ���ǽ��� ����� ������� ���� ���� ���๮�� �ּ� �� �� �̻� �����Ű�� �ݸ�
	// while���� ���ǽ��� ����� true�� ���� ���� ���� ���๮�� �����Ų��.

	// TO DO : �̸� ������ ��й�ȣ�� ��ġ�ϴ� ���ڸ� �Է��� ������ �Է��� �ݺ��ϴ� ���α׷�
	int secret_code = 337;
	int input = 337;

	// while��
	// ���ǽ��� ���� �� ���� ���� ���๮ ����
	while (input != secret_code) {
		printf("Enter secret code : ");
		scanf("%d", &input);
	};

	printf("Good!");

	// ���ǽ� input != secret_code�� false�̹Ƿ�
	// ���๮�� �����Ű�� �ʰ� Good!�� ����Ѵ�.

	return 0;
}