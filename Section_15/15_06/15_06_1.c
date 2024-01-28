// 15.6 비트단위 시프트 연산자

#include <stdio.h>
int main(void)
{
	// 8 bit integer cases
	//                                    76543210           76543210           76543210
	printf("%hhd\n", 1 << 3);          // 00000001   ->   00000001???     ->    00001000
	printf("%hhd\n", 8 >> 3);          // 00001000   ->      ?00001000    ->    00000100

	printf("%hhd\n", -119 >> 3);       // 10001001   ->      ???10001001  ->    11110001 (-15)
	printf("%hhu\n", 137 >> 3);        // 10001001   ->      ???10001001  ->    00010001 (17)

	printf("%hhd\n", -119 << 4);       // 10001001   ->  10001001????     ->    10010000 (-112)
	printf("%hhu\n", 137 << 4);        // 10001001   ->  10001001????     ->    10010000 (144)

	return 0;
}