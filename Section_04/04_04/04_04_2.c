// 4.4 strlen() �Լ�
/*
	strlen()
	���ڿ�(char�� �迭)���� NULL(\0) �������� ������ �� ��ȯ
*/

#include <stdio.h>
#include <string.h> // strlen()�� ���Ե� ���̺귯�� (�� ���̺귯���� �������� ���� ��� strlen()�� ��ȯ���� int�� ���ͼ� ���� �߻�
#include <stdlib.h> // malloc()�� ���Ե� ���̺귯��
int main(void)
{
	// ���ڿ��� �����ϱ� ���� char Ÿ�� ũ���� �޸� ���� 100���� ���� �Ҵ�
	char *str5 = (char*)malloc(sizeof(char) * 100);
	
	// �迭�� �� ��ҿ� ���� ���� ����
	str5[0] = 'H';
	str5[1] = 'e';
	str5[2] = 'l'; 
	str5[3] = 'l';
	str5[4] = 'o';
	str5[5] = '\0';

	printf("str5 : %zu %zu\n", sizeof(str5), strlen(str5));

	return 0;
}