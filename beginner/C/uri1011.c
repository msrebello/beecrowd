#include<stdio.h>
#include<math.h>

#define PI 3.14159

double volumeCalculator(double r);
void showResult(double value);
int main(int argc, char const *argv[]) {
    double radios;
    scanf("%lf", &radios);


    showResult(volumeCalculator(radios));

    return 0;
}

double volumeCalculator(double r) {
    return 4.0 / 3 * PI * pow(r, 3.0);
}

void showResult(double value) {
    printf("VOLUME = %.3lf\n", value);
}
