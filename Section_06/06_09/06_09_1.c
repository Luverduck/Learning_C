// 6.9 for���� ������

#include <stdio.h>
int main(void)
{
	// 1. ���� ī������ ����
	printf("[CASE 1]\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", i);
	};

	printf("\n\n");

	// 2. ���� ī������ ����
	printf("[CASE 2]\n");
	for (int j = 10; j > 0; j--) {
		printf("%d ", j);
	};

	printf("\n\n");

	// 3. char�� ���ǵ� ���� ī����
	printf("[CASE 3]\n");
	for (char c = 'A'; c <= 'Z'; c++) {
		printf("%c ", c);
	};

	printf("\n\n");

	// 4. double�� ���ǵ� ���� ī����
	printf("[CASE 4]\n");
	for (double d = 100.0; d < 300; d = d * 1.1) {
		printf("%lf ", d);
	};

	printf("\n\n");

	// 5. ������ ���ǽ� ���
	printf("[CASE 5]\n");
	for (int k = 0; k * k < 10; k++) {
		printf("%d ", k);
	};

	printf("\n\n");

	// 6. 2���� ���� ī���� ���
	printf("[CASE 6]\n");
	for (int x = 1, y = 5; y < 20; y = (++x * 3) + 10) {
		printf("%d ", x);
	};

	printf("\n\n");

	return 0;
}