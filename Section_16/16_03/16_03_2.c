// 16.3 #define ��ũ��
/*
	��ó�� ���ù� (Preprocessor Directive)
	������ ���� ��ó���Ⱑ Ư�� �۾��� �����ϵ��� �ϴ� ��ɹ�
	- #���� �����Ѵ�.
	- ��ɹ� ���� �����ݷ�(;)�� ���� �ʴ´�.

	��ũ�� (Macro)
	�Ϸ��� ��ɾ ���� ���·� ��Ÿ���� ��ɾ�
	C ���� ����� ���� ����ϴ� ǥ���� ���� Ư���� �̸����� ������ ���� '��ũ��(Macro)'�� �Ѵ�.
	��ó������ ��ũ�θ� ������ ��ū���� ��ü�ϴ� ���� '��ũ�� Ȯ��(Macro Expansion)'�̶� �Ѵ�.
*/

// ��ũ���� ����

// ��ü ���·� ���ǵ� ��ũ��(Object - Like Macro)
// 1) �Ϲ����� Object-Like Macro : ��ȣ�� ��� (Symbolic Constant) �Ǵ� ����� ��� (Manifest Constant)�� �Ѵ�.
// - ��ȣ�� ��� (Symbolic Constant) �Ǵ� ����� ��� (Manifest Constant)
#define PI 3.141592
#define GRAVITY 9.8
// - �Լ�
#define SAY_HELLO for(int i = 0; i < 10; ++i) printf("Hello, World!\n");

// 2) Chain Macro : ������ ���ǵ� ��ũ�θ� ���� ���ǵ� Object-Like Macro
#define THREE 3
#define NINE THREE*THREE

// 3) Multi-Line Macro : ���� ������ ���ǵ� Object-Like Macro
#define MESSAGE "The greatest glory in living lies not in never falling, \
but in rising every time we fall."

// �Լ� ���·� ���ǵ� ��ũ�� (Function-Like Macro)
#define SQUARE(X) X*X

#include <stdio.h>
int main(void)
{
	// ��ü ���·� ���ǵ� ��ũ��(Object - Like Macro)
	printf("%f\n", PI);
	printf("%f\n", GRAVITY);
	SAY_HELLO;
	printf("%d %d\n", THREE, NINE);
	printf("%s\n", MESSAGE);

	// �Լ� ���·� ���ǵ� ��ũ�� (Function-Like Macro)
	printf("%d", SQUARE(9));

	return 0;
}