// 4.6 ����� ���
/*
	����� ��� (Manifest Constant)
	��ó���� #define�� ���ǵ� ���
*/

// #define���� ���ǵ� ����� ��� PI
#define PI 3.141592f

#include <stdio.h>
#include <limits.h>	// INT_MAX, INT_MIN, ... , etc.
#include <float.h>	// FLT_MAX, FLT_MIN, ... , etc.

int main(void)
{
	printf("PI is %f\n", PI);
	printf("Biggest int : %d\n", INT_MAX);
	printf("One byte in this system(64-bit) is %d bits\n", CHAR_BIT);
	printf("Smallest normal float %e\n", FLT_MIN);

	return 0;
}