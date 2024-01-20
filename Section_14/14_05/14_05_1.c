// 14.5 ����ü�� �ٸ� ����ü�� ����� ����ϱ�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define LEN 20

// �̸�(first name)�� ��(last name)���� ������ �̸�(Name) ����ü
struct Name
{
	char given[LEN];   // first name
	char family[LEN];  // last name
};

// ����, �մ�, ����, ���, �ð����� ������ ����(Reservation) ����ü
struct Reservation
{
	struct Name guest; // nested struct
	struct Name host;  // nested struct
	char food[LEN];
	char place[LEN];

	// time
	int year;
	int month;
	int day;
	int hours;
	int minutes;
};

int main(void)
{
	struct Reservation reservation = {
		.guest = {"Nick", "Carraway"},
		.host = {"Jay", "Gatsby"},
		.food = {"Escargot"},
		.place = {"the Gatsby mansion"},
		.year = 1925,
		.month = 4,
		.day = 10,
		.hours = 18,
		.minutes = 30
	};

	/*
		[��¹� ����]
		Dear Nick Carraway,
		I would like to serve you Escargot.
		Please visit the Gatsby mansion on 10/4/1925 at 18:30.
		Sincerely,
		Jay Gatsby
	*/

	// ���� ������
	const char* format = 
		"\
Dear %s %s,\n\
I would like to serve you %s.\n\
Please visit %s on %d/%d/%d at %d:%d.\n\
Sincerely,\n\
%s %s\n\
"; // ��ó����� �� ������ '\' �ڿ� ���� ���ڰ� �� ��� ���� ���� �̾� ���δ�.

	// ���
	printf(format, 
		reservation.guest.given, reservation.guest.family,
		reservation.food,
		reservation.place, reservation.day, reservation.month, reservation.year, reservation.hours, reservation.minutes,
		reservation.host.given, reservation.host.family
	);

	return 0;
}