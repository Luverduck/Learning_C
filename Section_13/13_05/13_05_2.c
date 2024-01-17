// 13.5 ���̳ʸ� ���� �����

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Reading Example

	FILE* fp = fopen("binary_file", "rb");

	double d;
	int n = 0;

	// ���̳ʸ� ���Ͽ��� �б�
	fread(&d, sizeof(d), 1, fp);
	fread(&n, sizeof(n), 1, fp);

	int* arr = (int*)malloc(sizeof(int) * n);
	if (arr == NULL) exit(1); // ���� �Ҵ翡 ������ ���( !arr )

	// ���̳ʸ� ���Ͽ��� �б�
	fread(arr, sizeof(int), n, fp);

	// ������ ��(EOF) ����
	printf("feof = %d\n", feof(fp));

	// ���� �� ���
	printf("%f\n", d);
	printf("%d\n", n);
	for(int i = 0; i < n; ++i)
		printf("%d ", *(arr + i));
	printf("\n");

	// ������ ��(EOF) ���� ��ġ�� �б�
	fread(&n, sizeof(n), 1, fp);

	printf("feof = %d\n", feof(fp));		// ��� : non-zero (EOF�� �ƴ�)
	printf("ferror = %d\n", ferror(fp));	// ��� : 0 (Error�� �ƴ�)

	// ������ ��(EOF) ���� ��ġ�� ����
	fwrite(&n, sizeof(n), 1, fp);

	printf("feof = %d\n", feof(fp));		// ��� : non-zero (EOF�� �ƴ�)
	printf("ferror = %d\n", ferror(fp));	// ��� : non-zero (Error)

	fclose(fp);
	free(arr);

	return 0;
}