// 13.8 �ؽ�Ʈ ������ ���̳ʸ�ó�� �о��

#include <stdio.h>
#include <windows.h> // SetConsoleOutputCP()

int main(void)
{
	// ���� ��Ʈ�� ����
	FILE* fp = fopen("test.txt", "rb");

	unsigned char ch;

	SetConsoleOutputCP(CP_UTF8); 

	// ���� ��Ʈ������ unsigned char ũ���� ������ 1���� �а� ch�� '����' �Ѵ�.
	while (fread(&ch, sizeof(unsigned char), 1, fp) > 0)
	{
		// ch�� ����� ���� ����Ѵ�.
		printf("%hhu %c\n", ch, ch);
	}

	// ���� ��Ʈ�� �ݱ�
	fclose(fp);

	return 0;
}