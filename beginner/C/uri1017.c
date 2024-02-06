#include<stdio.h>

int distanceCalculator(int time, int avgSpeed);
float howManyLitters(int distance);
void showResult(float value);
int main(int argc, char const *argv[]) {
   int time, avgSpeed;

   scanf("%d", &time);
   scanf("%d", &avgSpeed);

   showResult(howManyLitters(distanceCalculator(time, avgSpeed)));

    return 0;
}

int distanceCalculator(int time, int avgSpeed) {
    return time * avgSpeed;
}

float howManyLitters(int distance) {
    return distance / 12.0;
}

void showResult(float value) {
    printf("%.3f\n", value);
}