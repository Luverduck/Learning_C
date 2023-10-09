// 4.4 strlen() �Լ�
/*
	strlen()
	���ڿ�(char�� �迭)���� NULL(\0) �������� ������ �� ��ȯ

	#include <string.h>
	strlen() �Լ��� ���Ե� ���̺귯��
	�� ���̺귯���� �������� �ʰ� strlen()�� ����� ���� ������ %zu�� ����� ���
	strlen() ����� int Ÿ������ ��ȯ�ǹǷ� ������ ���� ���� �߻�
	1) Size mismatch: 'int' passed as _Param_(3) when 'long long' is required in call to 'printf'.
	2) 'printf' : format string '%zu' requires an argument of type 'unsigned __int64', but variadic argument 2 has type 'int'
*/

#include <stdio.h>
#include <string.h> // strlen()�� ���Ե� ���̺귯�� (�� ���̺귯���� �������� ���� ��� strlen()�� ��ȯ���� int�� ���ͼ� ���� �߻�
int main(void)
{
	char str1[100] = "Hello";
	printf("str1 : %zu %zu\n", sizeof(str1), strlen(str1)); 

	char str2[] = "Hello";
	printf("str2 : %zu %zu\n", sizeof(str2), strlen(str2));

	char str3[100] = "\0";
	printf("str3 : %zu %zu\n", sizeof(str3), strlen(str3));

	char str4[100] = "\n";
	printf("str4 : %zu %zu\n", sizeof(str4), strlen(str4));

	return 0;
}