// 10.16 ������ �迭�� �Լ��� �����ϴ� ���

#include <stdio.h>

// ��ȣ�� ��� (symbolic constant)
#define ROWS 3
#define COLS 4

// �Լ� ȣ��� 2���� �迭�� �μ��� ���� (1)
int sum_2d_1(int arr_2d[ROWS][COLS]);

int main(void)
{
	// 2���� �迭
	int arr_2d[ROWS][COLS] = {
								{ 1, 2, 3, 4 },
								{ 5, 6, 7, 8 },
								{ 9, 0, 1, 2 }
												};
	
	// 2���� �迭 ��� ����� ��
	printf("%d\n", sum_2d_1(arr_2d));

	return 0;
}

// �Լ� ȣ��� 2���� �迭�� �μ��� ���� (1)
// - ȣ���� �Լ� ������ 2���� �迭 ������ �ڷ����� int(*)[4] �̹Ƿ� ���� �˾Ƴ� �� ����.
// - ���� ���� ��ȣ�� ���(���� ����)�� �����Ͽ� �Լ������� ������ �� �ֵ��� �Ѵ�.
int sum_2d_1(int arr_2d[ROWS][COLS])
{
	int sum = 0;
	for (int j = 0; j < ROWS; ++j) {
		for (int i = 0; i < sizeof(arr_2d[0]) / sizeof(int); ++i) {
			sum += arr_2d[j][i];
		};
	};

	return sum;
};