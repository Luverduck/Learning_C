// 10.15 포인터의 호환성
/*
	포인터의 호환성 관련 내용들은
	문법적으로 허용하는 내용들이지만 권장하지 않는다.
*/

#include <stdio.h>
int main(void)
{
	// 길이가 다른 배열의 포인터

	// 2차원 배열
	int arr_2d_1[2][3] = { { 1, 2, 3}, { 4, 5, 6 } };
	int arr_2d_2[3][2] = { {6, 5}, {4, 3}, {2, 1} };

	// 1차원 배열
	int(*ptr_arr)[3];

	// 포인터 자료형과 다른 길이의 배열 포인터 저장
	ptr_arr = arr_2d_1;
	ptr_arr = arr_2d_2; // int (*)[3] != int (*)[2]이므로 Warning

	return 0;
}