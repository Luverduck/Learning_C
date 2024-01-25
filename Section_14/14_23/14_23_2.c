// 14.23 �ڷ������� ������ �ٿ��ִ� typedef
/*
	����� typedef
	������ �����ϴ� �ڷ����� ��Ī�� �����Ѵ�.
*/

#include <stdio.h>
#include <time.h> // time()

int main(void)
{
	// �̽� ������ �ڷ��� (Portable Type)
	// ���� ȯ�濡 ���� �ٸ� �ڷ����� ������ ���ǵ� �ڷ���

	// size_t
	typedef unsigned char BYTE;
	size_t s = sizeof(BYTE);
	// - x86���� size_t�� unsigned int�� ����
	// - x64���� size_t�� unsigned long long���� ����

	// time_t
	time_t t = time(NULL);

	return 0;
}