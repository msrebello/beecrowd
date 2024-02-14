#include<stdio.h>

int convertStartToSeconds(int startHour, int startMinute, int startSecond);
int convertEndToSeconds(int endHour, int endMinute, int endSecond);
int calculateDurationInSeconds(int startInSeconds, int endInSeconds);
int convertDurationToHours(int totalDurationInSeconds);
int convertDurationToMinutes(int totalDurationInSeconds);
int convertDurationToSeconds(int totalDurationInSeconds);
int convertDurationToDays(int, int, int startDay, int endDay);

int main(int argc, char const *argv[]) {
    int startDay, 
        startHour, 
        startMinute, 
        startSecond;
    int endDay, 
        endHour, 
        endMinute, 
        endSecond;
        
    scanf("Dia %d", &startDay);
    scanf("%d : %d : %d\n", &startHour, &startMinute, &startSecond);
    scanf("Dia %d", &endDay);
    scanf("%d : %d : %d", &endHour, &endMinute, &endSecond);

    int startInSeconds = convertStartToSeconds(startHour, startMinute, startSecond);
    int endInSeconds = convertEndToSeconds(endHour, endMinute, endSecond);
    int totalDurationInSeconds = calculateDurationInSeconds(startInSeconds, endInSeconds);

    int durationInHours = convertDurationToHours(totalDurationInSeconds);
    int durationInMinutes = convertDurationToMinutes(totalDurationInSeconds);
    int durationInSeconds =  convertDurationToSeconds(totalDurationInSeconds);
    int durationInDays = convertDurationToDays(startInSeconds, endInSeconds, startDay, endDay);

    printf("%d dia(s)\n", durationInDays); 
    printf("%d hora(s)\n", durationInHours);
    printf("%d minuto(s)\n", durationInMinutes);
    printf("%d segundo(s)\n", durationInSeconds);

    return 0;
}

int calculateDurationInSeconds( int startInSeconds, int endInSeconds) {
    return (endInSeconds < startInSeconds || endInSeconds == startInSeconds) ? 24 * 3600 + endInSeconds - startInSeconds : endInSeconds - startInSeconds; 
}

int convertStartToSeconds(int startHour, int startMinute, int startSecond) {
    return startHour * 3600 + startMinute * 60 + startSecond;
}

int convertEndToSeconds(int endHour, int endMinute, int endSecond) {
    return endHour * 3600 + endMinute * 60 + endSecond;
}

int convertDurationToHours(int totalDurationInSeconds) {
    return totalDurationInSeconds / 3600;
}

int convertDurationToMinutes(int totalDurationInSeconds) {
    return totalDurationInSeconds % 3600 / 60;
}

int convertDurationToSeconds(int totalDurationInSeconds) {
    return totalDurationInSeconds % 3600 % 60;
}

int convertDurationToDays(int startInSeconds, int endInSeconds, int startDay, int endDay) {
    int durationDays = 0;

    if(endInSeconds < startInSeconds) {
        durationDays = endDay - startDay - 1;
    } else {
        durationDays = endDay - startDay;
    }

    return durationDays;
}
    


    