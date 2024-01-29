// 15.8 RGBA ���� ��Ʈ ����ũ ��������
/*
	16������ RGBA �ڵ带 10������ R, G, B, A�� ����
	- 16������ �ڸ��� ������ 0 ~ 15 ������ ���ڸ� ���� �� �ִ�.
	  ���� �ϳ��� 16���� �ڸ����� ǥ���ϱ� ���� 4���� ��Ʈ(bit)�� �ʿ��ϴ�. ( 2^4 = 16 )
	  16������ �� �ڸ��� ��� R, G, B, A�� ǥ���� �� �ִ�.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define BYTE_MASK 0xff // Bit Mask

int main(void)
{
	// 16���� RGBA �ڵ�
	unsigned int rgba_color = 0x66CDAAFF; // (102, 205, 170, 255)

	// R, G, B, A
	unsigned char red, green, blue, alpha;

	// ��Ʈ ������ ����Ʈ ������ '>>' ���
	alpha = rgba_color & BYTE_MASK;
	blue = (rgba_color >> 8 & BYTE_MASK);
	green = (rgba_color >> 16 & BYTE_MASK);
	red = (rgba_color >> 24 & BYTE_MASK);

	// ���
	printf("(R, G, B, A) = (%hhu, %hhu, %hhu, %hhu)\n", red, green, blue, alpha);

	return 0;
}