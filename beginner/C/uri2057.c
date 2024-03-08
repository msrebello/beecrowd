/*
    @author: Matheus Rebello;
    @date: 08/03/2024;
    @name: Time Zone;
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    short int hr, duration, tz;
    short int arrival;

    scanf("%hd %hd %hd", &hr, &duration, &tz);

    arrival = hr + duration + tz;

    printf("%hd\n", (arrival < 0) ? 24 + arrival : (arrival > 23) ? arrival - 24 : arrival);

    return 0;
}
