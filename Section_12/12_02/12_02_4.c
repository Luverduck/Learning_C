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
 
    // ���� ������ L-value ǥ���� (modifiable L-value expression)
    int var_name;
    int* ptr = &var_name;

    var_name = 3; // modifiable L-value expression
    *ptr = 7;     // modifiable L-value expression

    return 0;
}