// 5.7 ������ ������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int seconds = 0, minutes = 0, hours = 0;

	// ������ �Է��� �� printf�� ������� �ʰ� �ٷ� �ݺ��� ����
	printf("Input seconds : ");
	scanf("%d", &seconds);

	while (seconds >= 0) {
		// TODO : seconds -> hours, minutes, seconds
		minutes = seconds / 60;

		seconds = seconds % 60;	// seconds

		hours = minutes / 60;	// hours
		minutes = minutes % 60;	// minutes

		// print result
		printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);

		// �Է��� ���� while ���Ǻ� seconds >= 0 �� ������ �� �ݺ�, �������� ������ �ٷ� �ݺ� ����
		printf("Input seconds : ");
		scanf("%d", &seconds);
	}

	printf("Good bye\n");

	return 0;
}