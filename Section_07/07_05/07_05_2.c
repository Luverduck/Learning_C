// 7.5 else�� if ¦����
/*
	�߰�ȣ�� ������ if ~ else �� ���� ���� ����
	if�� else�� ¦�� ���� ���� ��� �鿩���⸦ �ϴ��� ���� if�� ¦���� �ȴ�.
*/

#include <stdio.h>
int main(void)
{
	int number = 3;
	if (number > 5)
	{
		if (number < 10)
			printf("Larger than 5 smaller than 10\n");
	}
	else
		printf("Less than or equal to 5");

	// ��� : Less than or equal to 5

	return 0;
}