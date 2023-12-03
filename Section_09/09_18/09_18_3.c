// 9.18 �������� �Ű�����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* a, int* b);

int main() {
	int a = 10;
	int b = 20;
	// main �Լ��� ���� a, b�� swap �Լ��� �Ű����� a, b�� ���� '����' �ּҸ� ����Ų��.
	printf("main function - a:%p b:%p\n", &a, &b);
	// 1) ������ �ּ�(address)�� �μ��� �Ͽ� �Լ��� ȣ���Ѵ�. (Call by Reference)
	swap(&a, &b);
	// ���� a�� b�� ���� ���� �ٲ��.
	printf("%d %d\n", a, b);
};

void swap(int* a, int* b) {
	// main �Լ��� ���� a, b�� swap �Լ��� �Ű����� a, b�� ���� '����' �ּҸ� ����Ų��.
	printf("swap function - a:%p b:%p\n", a, b);
	// 2) �μ��� ����� �ּ�(address)�� �Ű������� ����(copy)�Ͽ� �Լ��� �����Ѵ�.
	int temp = *a; // ����� �ּҸ� �������Ͽ� ���� ���� �ٲ۴�.
	*a = *b;
	*b = temp;
};