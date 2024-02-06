#include<stdio.h>

float avgConsumption(int distance, float fuel);
void showConsumption(float value);
int main(int argc, char const *argv[]) {
    int X;
    float Y;

    scanf("%d", &X);
    scanf("%f", &Y);

    showConsumption(avgConsumption(X, Y));

    return 0;
}

float avgConsumption(int distance, float fuel) {
    return distance / fuel;   
}

void showConsumption(float value) {
    printf("%.3f km/l\n", value);
}