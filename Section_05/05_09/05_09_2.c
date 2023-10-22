// 5.9 ǥ���İ� ����
/*
	������ ����Ʈ (sequence point)
	ǥ������ ���ϴ� ���� �μ� ȿ���� �Ͼ�� ����
*/

#include <stdio.h>
int main(void)
{
	int x = 0;
	int y = 0;
	int z = 0;
	int i = 0;

	// ������ ����Ʈ
	// 1. ��ü ǥ����(full expression)�� ��
	x = (y + 1) + (z = 3);

	// 2. �ݺ������� ���� ǥ����(controlling expression)�� ��
	// 2-1) while������ ���� ǥ����(controlling expression)�� ��
	while (i < 10) { // <- end of controlling expression
		// [statement]
	};

	// 2-2) do ~ while������ ���� ǥ����(controlling expression)�� ��
	do {
		// [statement]
	} while (i < 10); // <- end of controlling expression

	// 2-3) for������ �� ���� ǥ����(controlling expression)�� ��
	for (i = 0; i < 10; i++) { // end of each controlling expression
		// [statement]
	};

	// 3. �б⹮���� ���� ǥ����(controlling expression)�� ��
	// 3-1) if������ ���� ǥ����(controlling expression)�� ��
	if ( i < 0 ) { // <- end of controlling expression
		// [statement]
	};

	// 3-2) switch������ ���� ǥ����(controlling expression)�� ��
	switch ( i < 0 ) { // <- end of controlling expression
		// [statement]
	};

	return 0;
}