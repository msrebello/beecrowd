#include<stdio.h>

float average(float x, float y);
void showResult(float average);

int main(int argc, char const *argv[]) {
    float A, B;
    scanf("%f", &A);
    scanf("%f", &B);

    showResult(average(A, B));
    
    return 0;
}

float average(float x, float y) {
    return (x * 3.5 + y * 7.5) / 11;
}

void showResult(float average) {
    printf("MEDIA = %.5f\n", average);
}