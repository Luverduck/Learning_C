// 7.13 goto�� ���ϴ� ���

#include <stdio.h>
int main(void)
{
	/* conditional */
	int size = 15, cost;

	/* goto�� ���
	if (size < 10)
		goto a;
	goto b;
a: cost = 50 * size;
b: cost = 100 * size;
	*/

	// if�� ���
	if (size < 10)
		cost = 50 * size;
	cost = 100 * size; // else���� ����

	return 0;
}