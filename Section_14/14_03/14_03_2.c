// 14.3 ����ü�� �޸� �Ҵ�
/*
	����ü ��� ���� (Structure Member Alignment)
	����ü�� �޸𸮿� �Ҵ��� �� �߻��ϴ� ������ ���� ���� (Data Structure Alignment)
	��� ���̿� [Byte] ������ ����ִ� �޸𸮸� �߰��Ͽ� 
	����ü�� �޸� ũ�⸦ CPU Word�� ����� �ǵ��� �����ϴ� ��

	CPU Word
	CPU�� �� ���� ó���� �� �ִ� �������� ũ�⸦ �ǹ��Ѵ�.
	- 32Bit � ü�� : 4[Byte]
	- 64bit � ü�� : 8[Byte]
*/

#include <stdio.h>
int main(void)
{
	// ����ü Padding1 ����
	struct Padding1 // ����� �ڷ������� ����� ����ü�� ũ�� : 1 + 4 + 8 = 13[Byte]
	{
		char mem_char;
		float mem_float;
		double mem_double;
	};

	// ����ü Padding1�� ���� ����
	struct Padding1 p1;

	// ����ü Padding1�� ���� �� ����� ũ�� ���
	printf("struct Padding1 p1\n");
	printf("Sizeof %zd\n", sizeof(p1));
	printf("%lld\n", (long long)&p1);
	printf("%lld\n", (long long)&p1.mem_char);
	printf("%lld\n", (long long)&p1.mem_float);
	printf("%lld\n", (long long)&p1.mem_double);

	printf("\n");

	// ����ü Padding2 ����
	struct Padding2 // ����� �ڷ������� ����� ����ü�� ũ�� : 1 + 4 + 8 = 13[Byte]
	{
		float mem_float;
		double mem_double;
		char mem_char;
	};

	// ����ü Padding2�� ���� ����
	struct Padding2 p2;

	// ����ü Padding2�� ���� �� ����� ũ�� ���
	printf("struct Padding2 p2\n");
	printf("Sizeof %zd\n", sizeof(p2));
	printf("%lld\n", (long long)&p2);
	printf("%lld\n", (long long)&p2.mem_float);
	printf("%lld\n", (long long)&p2.mem_double);
	printf("%lld\n", (long long)&p2.mem_char);

	printf("\n");

	// ����ü Padding3 ����
	struct Padding3 // ����� �ڷ������� ����� ����ü�� ũ�� : 1 + 4 + 8 = 13[Byte]
	{
		char mem_char;
		double mem_double;
		float mem_float;
	};

	// ����ü Padding2�� ���� ����
	struct Padding3 p3;

	// ����ü Padding2�� ���� �� ����� ũ�� ���
	printf("struct Padding3 p3\n");
	printf("Sizeof %zd\n", sizeof(p3));
	printf("%lld\n", (long long)&p3);
	printf("%lld\n", (long long)&p3.mem_char);
	printf("%lld\n", (long long)&p3.mem_double);
	printf("%lld\n", (long long)&p3.mem_float);

	return 0;
}