// 16.10 _Generic ǥ����
/*
    _Generic Ű����
    ǥ������ �ڷ����� ���� �ٸ� ������ �����Ѵ�. (Visual Studio������ �������� �ʴ´�.)
    _Generic( (expression),
        type_1: statements,
        type_2: statements,
        .
        .
        default: statements
    )
*/

#include <stdio.h>

int main()
{
    printf("%d\n", 
        // 1.0L�� float�� ��� 1, double�� ��� 2, long double�� ��� 3, �� �� 0�� ��ȯ
        _Generic(1.0L, float : 1, double : 2, long double : 3, default: 0)
    );

    printf("%d\n", 
        // 1L�� float�� ��� 1, double�� ��� 2, long double�� ��� 3, �� �� 0�� ��ȯ
        _Generic(1L, float : 1, double : 2, long double : 3, default: 0)
    );

    printf("%d\n", 
        // 1.0L�� float�� ��� 1, double�� ��� 2, long double�� ��� 3�� ��ȯ
        _Generic(1.0L, float : 1, double : 2, long double : 3)
    );

    return 0;
}