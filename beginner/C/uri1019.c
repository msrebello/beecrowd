#include<stdio.h>

void convertTo(int time);
int main(int argc, char const *argv[]) {
    int seconds;
    scanf("%d", &seconds);

    convertTo(seconds);

    return 0;
}

void convertTo(int time) {
    int hours, minutes, seconds;

    hours = time / 3600;
    minutes = time % 3600 / 60;
    seconds = time % 3600 % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);
}