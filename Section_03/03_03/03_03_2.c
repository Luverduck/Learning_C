// 3.3 scanf() �Լ��� �⺻���� ����
/*
	��ó���� ���� ���� ���� scnaf()�� �����Ͽ� �������ϸ� ������ ���� ������ �߻��Ѵ�.
	Error	C4996
	'scanf': This function or variable may be unsafe.
	Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS.
	See online help for details.
*/

// �ذ��� 2) ��ó���� ���� ����
// ������Ʈ�� ������Ʈ �� �ҽ��� ��Ŭ�� �� [Properties]�� �����Ͽ� 
// [C/C++] - [Preprocessor]�� �ִ� [Preprocessor Definitions]�� ���� _CRT_SECURE_NO_WARNINGS�� �߰��Ѵ�.

#include <stdio.h>
int main(void)
{
	// ���� �ʱ�ȭ
	int i = 0;

	// �Է�
	scanf("%d", &i); // & : ampersand

	// ���
	printf("Value is %d\n", i);

	return 0;
}