// 14.6 ����ü�� ������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ����ü ����
struct MyData
{
	int mem_int;
	char mem_char;
	float mem_arr[2];
};

int main(void)
{
	// ����ü ���� data1 ���� �� ��� �ʱ�ȭ
	struct MyData data1 = { 1234, 'A' };
	data1.mem_arr[0] = 1.1f;
	data1.mem_arr[1] = 2.2f;

	// ����ü ���� data1�� ��� ���
	printf("%d %c %lld\n", data1.mem_int, data1.mem_char, (long long)data1.mem_arr);
	printf("%f %f\n", data1.mem_arr[0], data1.mem_arr[1]);
	printf("%lld %lld\n\n", (long long)&data1.mem_arr[0], (long long)&data1.mem_arr[1]);

	// ����ü ���� data2 ���� �� ����� ����ü data1�� ����� ������ �ʱ�ȭ
	// ����ü ������ ���� �����ϸ� ���� ����ü ����� ��� ���� ������ ����ü ����� ������ �����Ѵ�.
	struct MyData data2 = data1;

	// ����ü ���� data2�� ��� ���
	printf("%d %c %lld\n", data2.mem_int, data2.mem_char, (long long)data2.mem_arr);
	printf("%f %f\n", data2.mem_arr[0], data2.mem_arr[1]);
	printf("%lld %lld\n\n", (long long)&data2.mem_arr[0], (long long)&data2.mem_arr[1]);

	return 0;
}