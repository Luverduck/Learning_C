// 15.10 ��Ʈ �ʵ��� ��� ���
/*
    MS-DOS�� ���� ���� �ð�
    MS-DOS�� ���� ���� �ð��� �����ϴ� ������ ��Ʈ �ʵ�� ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    struct file_time
    {
        unsigned int second : 5; // 2^5 = 32,  (0 ~ 29) 30*2 seconds
        unsigned int minute : 6; // 2^6 = 64,  (0 ~ 59) 60 minutes
        unsigned int hour   : 5; // 2^5 = 32,  (0 ~ 23) 24 hours
    } ft;

    struct file_date
    {
        unsigned int day    : 5; // 2^5 = 32,  1 ~ 31
        unsigned int month  : 4; // 2^4 = 16,  1 ~ 12
        unsigned int year   : 7; // 2^7 = 128, 1980 ~ 
    } fd;

    // 1988.12.28
    fd.day = 28;
    fd.month = 12;
    fd.year = 8;

    printf("Day %u, Month %u, Year %u\n", fd.day, fd.month, fd.year);


    // ��Ʈ �ʵ� ��� �� ������ ��
    // scanf �Լ��� ��Ʈ �ʵ��� ���� ������ �� ����.
    // scanf("%d", &fd.day); // error C2104: '&' on bit field ignored

    return 0;
}