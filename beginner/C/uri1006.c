#include<stdio.h>

double average(double x, double y, double z);
void showResult(double average);

int main(int argc, char const *argv[]) {
    double A, B, C;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    showResult(average(A, B, C));
    
    return 0;
}

double average(double x, double y, double z) {
    return (x * 2.0 + y * 3 + z *5) / 10;
}

void showResult(double average) {
    printf("MEDIA = %.1lf\n", average);
}