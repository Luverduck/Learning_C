// 6.13 Ż������ ���� do while

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// TO DO : �̸� ������ ��й�ȣ�� ��ġ�ϴ� ���ڸ� �Է��� ������ �Է��� �ݺ��ϴ� ���α׷�
	
	// ���� �ۼ��� �ڵ�
	int answer = 1443;
	int input = 0;
	_Bool judge = 0;
	while (judge == 0) {
		printf("Enter secret code : ");
		scanf("%d", &input);
		if (input == answer) {
			judge = 1;
		};
	};

	printf("Good!");

	return 0;
}