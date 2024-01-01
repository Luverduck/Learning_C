// 12.2 ��ü�� �ĺ���, lvalue�� rvalue
/*
    L-value
    ��ü(object)�� ����Ű�� ǥ����
    ��L-value is an expression ��referring�� to an object.�� (K&R p.197)

    - L-value : ���� ������ ���� �κ�
    ��left side of an assignment.�� (K.N.K p.197)

    - R-value : ���� ������ ������ �κ� (����, ���, ǥ����)
    ��right side, variable, constant, expression.�� (K.N.K p.67)
*/

#include <stdio.h>
int main(void)
{
    // L-value�� R-value ����

    // ���ڿ��� L-value�� ����� �� ����.
    // ���ڿ� R-value
    const char* str_ptr = "Constant string";
    char str_arr[] = "String in an array";

    // ���ڿ� L-value
    // "Constant string" = "Second string"; // Error

    return 0;
}