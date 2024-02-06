#include<stdio.h>
#include <math.h>

double distanceOfTwoPointsCalculator(double x1, double x2, double y1, double y2);
void showTheDistanceValue(double value);
int main(int argc, char const *argv[]) {
    double x1, x2, y1, y2;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    showTheDistanceValue(distanceOfTwoPointsCalculator(x1, x2, y1, y2));

    return 0;
}

double distanceOfTwoPointsCalculator(double x1, double x2, double y1, double y2) {
    return sqrt(pow(x2-x1, 2) + pow(y2 -y1, 2));
}

void showTheDistanceValue(double value) {
    printf("%.4lf\n", value);
}