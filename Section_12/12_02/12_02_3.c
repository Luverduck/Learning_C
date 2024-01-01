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
    // L-value�� R-value�� ����
    // L-value�� ����Ű��(referring) �޸� ������ R-value�� ���� �����Ѵ�.

    // 'var_name'�̶�� �ĺ����� ��ü ����
    int var_name;

    // �ĺ��� 'var_name'�� ����Ű�� ��ü�� 3�� ���� 
    var_name = 3;

    // *ptr�� ����Ű�� �޸� ������ val�� ����Ű�� ��ü�� ����� �� 5�� ����
    int val = 5;
    int* ptr = &var_name;
    *ptr = val;
    // *ptr : L-value
    //  val : R-value

    return 0;
}