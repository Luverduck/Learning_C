// 5.9 ǥ���İ� ����
/*
	���� (Statements)
	������ ������ ����ϴ� �ּ� ������ �������� �ڵ� �Ǵ� �ڵ� ���
*/

#include <stdio.h>
int main(void)
{
	// ������ ����
	int x, y;            // declaration statement
	x = 2;               // assignment statement
	;                    // null statement

	y = 1 + (y = 5);     // ���⼭ 'y = 5'�� subexpression 

	while (x++) {        // structured statement
		y = x + y;
	};

	printf("%d\n", x);   // function call statement

	return 0;            // return statement
}