// 12.18 �ڷ��� �����ڵ� const, volatile, restrict

#include <stdio.h>
int main(void)
{
	// 	restrict
	// �ش� �ĺ��ڰ� �ĺ����� ��ü�� �����ϱ� ���� ������ �ĺ������� ��Ÿ����.
	// - Visual Studio������ '_restrict' Ű���带 ����Ѵ�.
	// - Compiler�� �ش� Ű���尡 ���� �����ͷθ� Ư�� ��ü�� �����ϵ��� �����Ѵ�. (����ȭ�� ����)

	int a = 10;

	// �ĺ��� ���� __restrict (2���� '_'�� ����Ѵ�)
	int* __restrict ptr = &a;

	return 0;
}