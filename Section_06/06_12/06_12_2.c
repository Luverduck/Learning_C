// 6.12 ������ ����
/*
	�̺й��� ����
	��Ʋ��Ÿ�� 100m �տ� �ִ� ��������� �̵��Ѵٰ� ��������.
	��������� �̵��ϱ� ���ؼ��� ���� ���� ����(1/2)�� �����ؾ� �Ѵ�.
	�� �������� �̵��� ������ ����� ������ ���� ����(1/4)�� �����ؾ� �Ѵ�.
	�� �������� �̵��� ������ ����� ������ ���� ����(1/8)�� �����ؾ� �Ѵ�.
	������ ��ӵǴ� ���� ������ ���� ������� ������� ���� ������ �����ϴ� ���� �Ұ����ϴ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// �̺й��� ���� �ùķ��̼� ����
	/*
		�ʱⰪ
		Speed : 1.0 [m/s]
		dt : 1.0[s]
		Distance = Speed * dt

		��Ʋ��Ÿ�� ��ġ
		Step 1 : 1.0[m/s] * 1.0[s] = 1.0[m] => Distance = 1.0[m]
		Step 2 : 1.0[m/s] * 0.5[s] = 0.5[m] => Distance = 1.0[m] + 0.5[m] = 1.5[m]
		Step 3 : 1.0[m/s] * 0.25[s] = 0.25[m] => Distance = 1.5[m] + 0.25[m] = 1.75[m]
		...
	*/

	const double speed = 1.0; // �ӵ�[m/s]
	const unsigned repeat_max = 100; // ���� Ƚ��

	double dt = 1.0; // ���� ����[s]
	double time = 0.0; // �ɸ� �ð�[s]
	double distance = 0.0; // �̵��Ÿ�[m]

	for (unsigned i = 0; i < repeat_max; i++)
	{
		distance += speed * dt;
		time += dt;
		// ���ɸ鿡�� ������ �����⺸�� ���� �ӵ��� ������.
		// dt = dt / 2.0;
		dt = dt * 0.5;
		printf("Elapsed time = %.10fs, Distance = %.10fm\n", time, distance);
	};

	return 0;
}