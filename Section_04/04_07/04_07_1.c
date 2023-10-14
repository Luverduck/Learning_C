// 4.7 printf() �Լ��� ��ȯ �����ڵ�
/*
	���� ��ȯ ������ (Format Conversion Specifier)
	printf() �Լ��� �Էµ� �μ��� ��� ���� ���� 
*/

#include <stdio.h>
#define PAGES 959
int main(void)
{
	int num_integer = 10000;
	double num_real_number = 123.45678987;
	char num_char = 126;
	char num_string[] = "Hello!";
	int* num_pointer = &num_integer;

	// 1. ������
	printf("%d\n", num_integer);
	printf("%i\n", num_integer); // %d �Ǵ� %i : ��ȣ�� ���� 10������ ǥ��
	printf("%o\n", num_integer); // %o : ��ȣ�� ���� 8������ ǥ��
	printf("%x\n", num_integer); // %x : ��ȣ�� ���� 16������ ǥ�� (0f ǥ���)
	printf("%x\n", num_integer); // %x : ��ȣ�� ���� 16������ ǥ�� (0F ǥ���)

	// 2. �Ǽ���
	printf("%f\n", num_real_number); // %f : �ε��Ҽ��� ����� 10������ ǥ�� (10�� ǥ���)
	printf("%e\n", num_real_number); // %e : �ε��Ҽ��� ����� 10������ ǥ�� (e-ǥ���)
	printf("%E\n", num_real_number); // %E : �ε��Ҽ��� ����� 10������ ǥ�� (E-ǥ���)
	printf("%a\n", num_real_number); // %a : �ε��Ҽ��� ����� 16������ ǥ�� (p-ǥ���)
	printf("%A\n", num_real_number); // %A : �ε��Ҽ��� ����� 16������ ǥ�� (P-ǥ���)
	printf("%g\n", num_real_number); // %g : %f�� %e �� �� ª�� ������ ǥ��
	printf("%G\n", num_real_number); // %G : %f�� %E �� �� ª�� ������ ǥ��

	// 3. ������
	printf("%c\n", num_char); // %c : ��ȣ�� �ִ� ���ڷ� ǥ��
	printf("%s\n", num_string); // %s : ���ڿ� ǥ��

	// 4. ������
	printf("%p\n", &num_pointer); // %p : ������ �ּҰ� ǥ��

	return 0;
}