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

    // �ּ� ������ R-value�� ������ ������ ���� L-value�� ����� �� �ִ�.
    int var_name = 3;
    int arr[100];

    // �ּ� ������ R-value
    int* ptr = arr + 2 * var_name;
    *(arr + 2 * var_name) = 456; // ������ ������ ���� L-value�� ����� �� �ִ�.

    return 0;
}