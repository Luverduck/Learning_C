// 15.9 ����ü ���� ��Ʈ �ʵ�
/*
    ��Ʈ �ʵ� (Bit Field)
    - ��Ʈ�� �����Ǿ� �ִ� �ʵ�
        K&R (The C Programming Language, 2nd Edition)
        - p149, A bit-field, or field for short, is a set of adjacent bits ��

        K.N.K (C Programming A Modern Approach, 2nd Edition)
        - p513, Dealing with a group of several consecutive bits (a bit-field) is ��
        - p516, C provides an alternative: declaring structures whose members represent bit-fields.

        S.Prata (C Primer Plus, 6th Edition)
        - p690, A bit field is set up with a structure declaration ��
*/

#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    // ��Ʈ �ʵ� ����
    struct
    {
        bool has_sword : 1;
        bool has_shield : 1;
        bool has_potion : 1;
        bool has_guntlet : 1;
        bool has_hammer : 1;
        bool has_key : 1;
        bool has_ring : 1;
        bool has_amulet : 1;
    } items_flag;

    // ��Ʈ ����ŷ
    // ���� �������� �����ϰ� ��Ʈ�� ON/OFF ��ų �� �ִ�.
    items_flag.has_sword = 1; // <-> flags = flags | MASK_SWORD;

	return 0;
}