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
	int input = 0;
	
	// do ~ while��
	// ���� ���� ���๮�� ������ �� ���ǽ� ��
	do
	{
		printf("Enter secret code : ");
		scanf("%d", &input);
	} 
	while (input == secret_code);

	printf("Good!");

	// ���ǽ� input != secret_code�� false������
	// ���๮�� ������� ���ο� �Է��� �޴´�.

	return 0;
}