// 16.11 inline �Լ�
/*
	inline Ű����
	�����Ϸ��� �Լ��� ȣ������ �ʰ� �ش� �Լ��� ���Ǹ� ��ü(replace)�ϵ��� **����**�Ѵ�.

	inline �Լ�
	inline Ű����� ���ǵ� �Լ�
	- static Ű���带 ����Ͽ� internal linkage�� �����ؾ� �Ѵ�.
*/

static inline int foo()
{
	return 5;
}

#include <stdio.h>
int main(void)
{
	int ret;

	// inline function
	ret = foo();

	printf("Output is : %d\n", ret);

	return 0;
}