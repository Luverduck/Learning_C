// 5.1 �ݺ� �������� ù ����
/*
	goto��
	Ư�� �� ��ȣ�� ���̺�� �ڵ� ������ �ǳʶ� �� ����ϴ� ��ɾ�
*/

#include <stdio.h>
int main(void)
{
	int n = 1;

label1:
	
	printf("%d\n", n);
	n = n + 1;

	if (n == 10) goto out; // Ư�� ������ �� ��� out���� ����

	goto label1; // label1���� ���ư�

out:

	return 0;
}