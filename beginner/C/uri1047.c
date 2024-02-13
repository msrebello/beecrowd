#include<stdio.h>

void calculateDuration(int, int, int, int, int*, int*);

int main(int argc, char const *argv[]) {
    int startHour, startMinute, endHour, endMinute, durationHours = 0, durationMinutes = 0;
    scanf("%d %d %d %d", &startHour, &startMinute, &endHour, &endMinute);

    calculateDuration(startHour, startMinute, endHour, endMinute, &durationHours, &durationMinutes);

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationHours, durationMinutes);

    return 0;
}

void calculateDuration(int sH, int sM, int eH, int eM, int* durationH, int* durationM) {
    int sTotalMinutes = sH * 60 + sM;
    int eTotalMinutes = eH * 60 + eM;
    int totalDurationInMinutes = 0;

    if(eTotalMinutes < sTotalMinutes || eTotalMinutes == sTotalMinutes)
        totalDurationInMinutes = 24 * 60 + eTotalMinutes - sTotalMinutes;
    else
        totalDurationInMinutes = eTotalMinutes - sTotalMinutes;

    *durationH = totalDurationInMinutes / 60;
    *durationM = totalDurationInMinutes % 60;
}