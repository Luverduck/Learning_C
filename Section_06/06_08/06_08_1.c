// 6.8 for ���� �Ұ�
/*
	for ���� (For Loop)
	for( [�ʱ��] ; [���ǽ�] ; [������] ){
		[���๮]
	};
*/
#include <stdio.h>
int main(void)
{
	// for�� ����
	for (int i = 0; i < 10; i++) {
		printf("%d ", i);
	};

	printf("\n");

	// while���� ��
	int j = 0;
	while (j < 10) {
		printf("%d ", j);
		j++;
	};

	return 0;
}