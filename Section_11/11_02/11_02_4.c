// 11.2 �޸� ���̾ƿ��� ���ڿ�

#include <stdio.h>
int main(void)
{
	// ���ڿ��� Ư¡
	
	// 3. �����ͷ� ����� ���ڿ��� �迭�� ����� ���ڿ��� �ʱ�ȭ �� �� �ִ�. (�ݴ�� �Ұ���)

	// �迭�� ����� ���ڿ�
	char str[] = "I am a String.";

	// �����ͷ� ����� ���ڿ�
	const char* ptr_str = "I am a String!";

	// �����ͷ� ����� ���ڿ��� �迭�� ����� ���ڿ��� �ʱ�ȭ
	ptr_str = str;
	//str = ptr_str;  // Error

	return 0;
}