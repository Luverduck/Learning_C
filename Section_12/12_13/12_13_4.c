// 12.13 �޸� ���� �Ҵ�
/*
	���� �Ҵ� �޸� (Dynamic Allocated Memory)
	��Ÿ�� �� ������� ��û�� ���� � ü���κ��� �Ҵ� �޴� �޸�
	- Heap ������ ����Ǹ� ����ڰ� ���� �Ҵ� �����ؾ� �Ѵ�.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// [����] ���� ���� �迭(VLA)�� ���� �Ҵ� �迭

	// ���� ���� �迭 (Variable-Length Array)
	int n = 10;
	int arr[n];
	// 1) Stack �������� �����Ǹ� automatic storage duration�� ������.
	// 2) �� �� �Ҵ�� ���� ���� �迭�� ���̸� �ٲ� �� ����.
	// 3) Visual Studio�� compiler���� �ش� ����� �������� �ʴ´�.

	// ���� �Ҵ� �迭
	int arr[] = (int*)malloc(10 * sizeof(int));
	// 1) Heap �������� �����Ǹ� dynamic storage duration�� ������.
	// 2) �Ҵ� ���� �� ���Ҵ��� ���� �迭�� ���̸� �ٲ� �� �ִ�.

	return 0;
}