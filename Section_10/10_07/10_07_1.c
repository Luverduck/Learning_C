// 10.7 �迭�� �Լ����� �������ִ� ���

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

float func(double arr[]);

int main(void)
{
	// �迭 ����
	float arr[] = { 1.8, -0.2, 6.3, 13.9, 20.5 };

	// �迭�� ũ�� ���
	printf("address in main = %p\n", arr);
	printf("size in main = %zd\n", sizeof(arr));

	// �Լ� ȣ��
	func(arr);

	return 0;
}

float func(float arr_func[]) 
{
	// �Լ� ȣ��� ���޵� �迭�� ũ��
	printf("address in func = %p\n", arr_func);
	printf("size in func = %zd\n", sizeof(arr_func));
};