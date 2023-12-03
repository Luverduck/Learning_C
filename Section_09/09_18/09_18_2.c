// 9.18 �������� �Ű�����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int a, int b);

int main() {
	int a = 10;
	int b = 20;
	// main �Լ��� ���� a, b�� swap �Լ��� �Ű����� a, b�� ���� '�ٸ�' �ּҸ� ����Ų��.
	printf("main function - a:%p b:%p\n", &a, &b);
	// 1) ������ ��(value)�� �μ��� �Ͽ� �Լ��� ȣ���Ѵ�. (Call by Value) 
	swap(a, b);
	// ���� a�� b�� ���� �ٲ��� �ʴ´�.
	printf("%d %d\n", a, b);
};

void swap(int a, int b) {
	// main �Լ��� ���� a, b�� swap �Լ��� �Ű����� a, b�� ���� '�ٸ�' �ּҸ� ����Ų��.
	printf("swap function - a:%p b:%p\n", &a, &b);
	// 2) �μ��� ����� ��(value)�� �Ű������� ����(copy)�Ͽ� �Լ��� �����Ѵ�.
	int temp = a;
	a = b;
	b = temp;
};