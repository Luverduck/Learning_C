// 12.2 ��ü�� �ĺ���, lvalue�� rvalue
/*
    ��ü (Object)
    - ���� ������ �� �ִ� �޸� ����
    - ��An object is simply a block of memory that can store a value.�� (K.N.K p.487)

    �ĺ��� (Identifier)
    - ����, �Լ�, ��ũ�� ���� �̸�
    - ��Name for variables, functions, macro, and other entities.�� (K.N.K p.25)
*/

#include <stdio.h>
int main(void)
{
    // ��ü�� �ĺ��� ����

    // �Ϲ����� ���
    int var_name = 3;      // var_name�� �ĺ����̴�.
    int* ptr = &var_name;  // ptr�� �ĺ����̴�.
    *ptr = 5;              // *ptr�� ǥ���������� ��ü�� ����Ų��(designate).

    // �迭�� ���
    int arr[100];          // arr�� �ĺ����̴�.
    arr[0] = 7;            // arr[0]�� ǥ���������� ��ü�� ����Ų��(designate).

    return 0;
}