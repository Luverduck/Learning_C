// 12.19 ��Ƽ ������
/*
	��Ƽ ������ (Multi-Threading)
	�ϳ��� ���α׷� ����(���μ���) �ȿ��� ���ÿ� ���� �۾�(������)�� �����ϴ� ��
	* C ������ ��Ƽ �������� �������� �ʴ´�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

// _Atomic int acnt = 0; // NA

DWORD WINAPI ThreadFunc(void* data)
{
	int n = 1;
	Sleep(1000);

	// acnt += n; // NA
	printf("Printing from Thread\n");
	
	return 0;
};

int main(void)
{
	HANDLE thread = CreateThread(NULL, 0, ThreadFunc, NULL, 0, NULL);

	if (thread)
		WaitForSingleObject(thread, INFINITE);

	return 0;
}