// 6.12 ������ ����
/*
	��ų���콺�� �ź���
	��ų���콺�� 100m ���� ���� �ź��� 10m�� ���ٰ� �����ϰ�, �ź��̰� ��ų���콺���� 100m �տ� �ִٰ� �����غ���. 
	�� ���¿��� ��ų���콺�� �ź��� ������� ���� 100m ������ ���ٰ� �ϸ� ���ÿ� �ź��� 10m�� ���ư���. 
	�׷��� �źϰ� ��ų���콺�� 10m��ŭ ������ �ִµ�, �� �� ��ų���콺�� �ٽ� 10m�� �� ���ư��� �ź��� 1m�� �̵��Ͽ� �ź��� �ٽ� 1m ��ŭ�� �ռ��� �ȴ�. 
	���������� ��ų���콺�� �ٽ� 1m�� ���� �ź��� 0.1m �� ���ư���. 
	���� ��ų���콺�� ���� �̼��� �Ÿ���ŭ�� �׻� ��ó���� �ǹǷ� �ƹ��� ��������� �ź��� ������� �� �Ұ����ϴ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
	// ��ų���콺�� �ź��� �ùķ��̼� ����
	/*
		�ʱⰪ
		Speed_turtle = 1.0[m/s]
		Speed_Archilleus = 10.0[m/s]
		Position_turtle_init = 10.0[m]
		Position_Archilleus_init = 0.0[m]
		Position_turtle = Position_turtle_init + (Speed_turtle * dt)
		Position_Archilleus = Position_Archilleus_init + (Speed_Archilleus * dt)
		Difference = | Position_turtle - Position_Archilleus |
		dt = Difference / Speed_Archilleus

		��ų���콺�� �ź��� ������ �Ÿ�
		Step 1 : 
			Position_turtle = 10.0[m] + 1.0[m/s] * 1.0[s] = 11.0[m]
			Position_Archilleus = 0.0[m] + 10.0[m/s] * 1.0[s] = 10.0[m]
			Difference = | 11.0[m] - 10.0[m] | = 1.0[m]
			dt = 1.0[m] / 10.0[m/s] = 0.1[s]
		Step 2 : 
			Position_turtle = 11.0[m] + 1.0[m/s] * 0.1[s] = 11.1[m]
			Position_Archilleus = 10.0[m] + 10.0[m/s] * 0.1[s] = 11.0[m]
			Difference = | 11.1[m] - 11.0[m] | = 0.1[m]
			dt = 0.1[m] / 10.0[m/s] = 0.01[s]
		...
	*/

	const unsigned repeat_max = 100; // ���� Ƚ��

	// �ӵ�
	const double speed_turtle = 1.0;
	const double speed_Archilleus = 10.0;

	// �ʱ� ��ġ
	double distance_turtle = 10.0;
	double distance_Archilleus = 0.0;

	// ��ų���콺�� �ź��� ������ �Ÿ�
	double difference = fabs(distance_turtle - distance_Archilleus);

	double dt = 1.0; // ���� ����[s]
	double time = 0.0; // �ɸ� �ð�[s]

	// �ʱ� ���� ���
	printf("Time = %.10fs, dt = %.10fs, Archilleus = %.10fm, Turtle = %.10fm\n", time, dt, distance_Archilleus, distance_turtle);

	for (unsigned i = 0; i < repeat_max; i++)
	{
		distance_Archilleus += speed_Archilleus * dt;
		distance_turtle += speed_turtle * dt;
		difference = fabs(distance_turtle - distance_Archilleus);
		time += dt;
		printf("Time = %.10fs, dt = %.10fs, Archilleus = %.10fm, Turtle = %.10fm, Difference = %.10fm\n", time, dt, distance_Archilleus, distance_turtle, difference);
		dt = difference / speed_Archilleus;
	};

	return 0;
}