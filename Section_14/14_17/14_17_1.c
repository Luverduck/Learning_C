// 14.17 �͸� ����ü
/*
	�͸� ����ü (Anonymous Union)
	�±װ� ���� ����ü
*/

#include <stdio.h>
int main(void)
{
	// �͸� ����ü�� ����
	// ����ü ������ ���� ����ü�� ��ҿ� ���� ������ ���ִ�.

	// ����ü ����
	struct Vector2D
	{
		union // ����ü �ȿ� �͸� ����ü ����
		{
			struct { double x, y; };
			struct { double i, j; };
			struct { double arr[2]; };
		};
	};

	// ����ü ���� ����
	struct Vector2D vec2d = { 3.14, 2.99 };

	printf("%.2f %.2f\n", vec2d.x, vec2d.y);
	printf("%.2f %.2f\n", vec2d.i, vec2d.j);

	for (int i = 0; i < sizeof(vec2d.arr) / sizeof(vec2d.arr[0]); ++i)
		printf("%.2f ", vec2d.arr[i]);

	return 0;
}