// 7.10 ���� ����� break�� continue
/*
	continue : continue ������ �ڵ带 �������� �ʰ� ���� ������ �ǳʶڴ�.
	break : break ������ �ڵ带 �������� �ʰ� ������ Ż���Ѵ�.
*/

#include <stdio.h>
int main(void)
{
	/* while������ continue�� placeholder�� ����ϴ� ��� */
	// * placeholder: ���� �ִ� �ٸ� ���� ����ϴ� ��ȣ�� �ؽ�Ʈ�� �Ϻ�
	while (getchar() != '\n')
		continue;

	return 0;
}