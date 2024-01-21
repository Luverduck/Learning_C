// 14.10 ���� ���ͷ�
/*
	���� ���ͷ� (Compound Literal)
	���� ���ͷ� ǥ������ ���� �͸��� �迭�̳� ����ü, ����ü�� ������ �� �ִ�.
	( type ){ initializer-list };
	- type : ������ ��ü Ÿ��
	- initializer-list : ������ ��ü�� �ʱⰪ

	���� ���ͷ��� Ư¡
	���� ���ͷ��� l-value�� ���еǸ�, �ּҰ��� ������.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ����ü ����
struct Rectangle
{
	double width;
	double height;
};

double rectangle_area(struct Rectangle);
double rectangle_area_ptr(struct Rectangle*);

int main(void)
{
	// 2. ����ü ���� ���� ���� �Լ��� ����ü�� ������ �� �ִ�.
	double area = 0.0;

	// �Լ��� ���� ���ͷ� ����
	area = rectangle_area( (struct Rectangle) { 1.0, 2.0 } );

	// �Լ��� ���� ���ͷ��� �ּ� ����
	area = rectangle_area_ptr( &(struct Rectangle) { 3.0, 4.0 } );

	return 0;
}

// �Է¹��� ����ü ���� ���
double rectangle_area(struct Rectangle rectangle)
{
	return rectangle.width * rectangle.height;
};

// �Է¹��� �ּ��� ����ü ���� ���
double rectangle_area_ptr(struct Rectangle* ptr_rectangle)
{
	return ptr_rectangle->width * ptr_rectangle->height;
};