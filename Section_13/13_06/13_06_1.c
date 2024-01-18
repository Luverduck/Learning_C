// 13.6 ���� ���� ����
/*
	���� ���� ����
	���� �����͸� �����Ͽ� ������ �д� ��ġ�� ������ �� �ִ�.
*/

#include <stdio.h>
int main(void)
{
	int ch;
	long cur;

	// ���� ��Ʈ���� ����.
	FILE* fp = fopen("test.txt", "r");

	// ���� ��Ʈ������ ���� ��ġ�� Ȯ���Ѵ�.
	cur = ftell(fp);
	printf("ftell = %ld\n", cur);

	// ���� ��Ʈ���� ��ġ�� ���� ��ġ�� �������� +2[Byte]��ŭ �̵���Ų��.
	fseek(fp, 2L, SEEK_SET);
	cur = ftell(fp);
	printf("ftell = %ld\n", cur);

	// ���� ��Ʈ������ ���� ��ġ�� ���ڿ��� ����� �� ���� ��ġ�� �̵���Ų��.
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);
	cur = ftell(fp);
	printf("ftell = %ld\n", cur);

	// ���� ��Ʈ���� ��ġ�� ���� ��ġ�� �������� -2[Byte]��ŭ �̵���Ų��.
	fseek(fp, -2L, SEEK_CUR);
	cur = ftell(fp);
	printf("ftell = %ld\n", cur);

	// ���� ��Ʈ������ ���� ��ġ�� ���ڿ��� ����� �� ���� ��ġ�� �̵���Ų��.
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);
	cur = ftell(fp);
	printf("ftell = %ld\n", cur);

	// ���� ��Ʈ���� ��ġ�� ������ ���� �������� 0[Byte]��ŭ �̵���Ų��.
	fseek(fp, 0L, SEEK_END);
	// ���� ��Ʈ������ ���� ��ġ�� ���ڿ��� ����� �� ���� ��ġ�� �̵���Ų��.
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);

	// ���� ��Ʈ���� ��ġ�� ������ ���� �������� -1[Byte]��ŭ �̵���Ų��.
	fseek(fp, -1L, SEEK_END);
	// ���� ��Ʈ������ ���� ��ġ�� ���ڿ��� ����� �� ���� ��ġ�� �̵���Ų��.
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);

	// ���� ��Ʈ���� ��ġ�� ������ ���� �������� -2[Byte]��ŭ �̵���Ų��.
	fseek(fp, -2L, SEEK_END);
	// ���� ��Ʈ������ ���� ��ġ�� ���ڿ��� ����� �� ���� ��ġ�� �̵���Ų��.
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);

	return 0;
}