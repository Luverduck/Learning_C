// 3.5 ������ �Ǽ�
/*
	����(Integer)
	0, ���� ����, ���� ������ ����
	�ٷ�� ������ ������ ���� �ڷ��� �տ� signed �Ǵ� unsigned�� ����
	������ �����ϴ� 10���� ������ ���� 2������ ��ȯ�Ǿ� �޸𸮿� ����

	�Ǽ�(Real number)
	�ε��Ҽ���(floating point) ǥ���� ���
	������ �����ϴ� 10���� �Ǽ��� ���� 2������ ��ȯ�Ǿ� �޸𸮿� ����
*/

#include <stdio.h>
int main(void)
{
	// �Ǽ� (Real Number) : ��ȣ(sign), ����(exponent), ����(fraction)�� ���� ���� �ٸ� ��Ʈ�� ����
	// �� ���е� �ε��Ҽ��� �Ҽ�(Single Precision floating point Real number)
	// 32[bit] �� ��ȣ 1[bit] / ���� 8[bit] / ���� 23[bit] �Ҵ�
	float float_num = 0.000012f;
	printf("%f\n", float_num);

	// �� ���е� �ε��Ҽ��� �Ҽ�(Double Precision floating point Real number)
	// �� 64[bit] �� ��ȣ 1[bit] / ���� 11[bit]/ ���� 52[bit] �Ҵ�
	double double_num = 0.000012;
	printf("%Lf\n", double_num);

	return 0;
}