// 2.2 C ���α׷� �Ⱦ��

#include <stdio.h>				// ��ó���� (Preprocessor instruction)
int main(void)					// main �Լ� ����
{								// ����(Scope)�� ����
	int a;						// ������ ���� (Declaration)
	int b;
	int c;

	a = 1;						// ������ �� �Ҵ� (Allocation)
	b = 2;

	c = a + b;					// ������ �̿��� ���� (Operation)

	printf("Result is %i", c);	// �Լ� ȣ�� (Call �Ǵ� Revoke)

	return 0;					// ����� ��ȯ (Return)
}