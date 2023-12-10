// 10.11 �迭 �Ű������� const

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_array(int arr[], int n);
void add_value(int arr[], int n, int val);
int sum(int arr[], int n);

int main(void)
{
	int arr[] = { 1, 2, 3, 4, 5 };
	
	int n = sizeof(arr) / sizeof(arr[0]);

	print_array(arr, n);

	add_value(arr, 5, 100);

	print_array(arr, n);

	int s = sum(arr, n);
	printf("sum is %d\n", s);
	print_array(arr, n);

	return 0;
}

// �迭�� ��� ��Ҹ� ����ϴ� �Լ�
// - �迭�� ��Ҹ� ��ȭ��Ű�� ������ �ܼ��� ����ϴ� ����� ������.
// - �Լ� ���� �� �迭�� ��ҳ� ���̸� ��ȭ��Ű�� �ʾƾ� �Ѵ�.
// - �Ű������� �迭 arr�� �迭�� ���� n�� const�� �����Ͽ� ���� ������ �� ������ �Ѵ�.
void print_array(const int arr[], const int n)
{
	for (int i = 0; i < n; ++i)
		printf("%d ", arr[i]);
	printf("\n");
};

// �迭�� ��� ��ҿ� ������ ���ϴ� �Լ�
// - �迭�� ��Ҹ� ��ȭ��Ű�� ����� ������.
// - �Լ� ���� �� �迭�� ��Ҹ� ��ȭ��Ű���� �迭�� ���̴� ��ȭ��Ű�� �ʾƾ� �Ѵ�.
// - �Ű����� �� �迭�� ���� n�� ���ϴ� �� val�� const�� �����Ͽ� ���� ������ �� ������ �Ѵ�. 
void add_value(int arr[], const int n, const int val)
{
	for (int i = 0; i < n; ++i)
		arr[i] += val;
};

// �迭�� ��� ��� ���� ���ϴ� �Լ�
// - �迭�� ��Ҹ� ��ȭ��Ű�� ������ �ܼ��� �迭 ����� �հ踦 ��ȯ�ϴ� ����� ������.
// - �Լ� ���� �� �迭�� ��ҳ� ���̸� ��ȭ��Ű�� �ʾƾ� �Ѵ�.
// - �Ű������� �迭 arr�� �迭�� ���� n�� const�� �����Ͽ� ���� ������ �� ������ �Ѵ�.
int sum(const int arr[], const int n)
{
	int total = 0;

	for (int i = 0; i < n; ++i)
		total += arr[i]; // arr[i]++;�� ���� �������� ������ ������ �� �ִ�.

	return total;
};