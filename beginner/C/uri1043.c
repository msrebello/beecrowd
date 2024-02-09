#include<stdio.h>

int itIsATriangle(float sideA, float sideB, float sideC);
float getPerimeterOfTriangle(float sideA, float sideB, float sideC);
float getAreaOfTrapezium(float majorBase, float minorBase, float height);


int main(int argc, char const *argv[]) {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    if(itIsATriangle(a, b, c) ==  1)
        printf("Perimetro = %.1f\n", getPerimeterOfTriangle(a, b, c));
    else
        printf("Area = %.1f\n", getAreaOfTrapezium(a, b, c));

    return 0;
}

int itIsATriangle(float sideA, float sideB, float sideC) {
    return ((sideA < sideB + sideC) && (sideB < sideA + sideC) && (sideC < sideA + sideB)) ? 1 : 0;
}

float getPerimeterOfTriangle(float sideA, float sideB, float sideC) {
    return sideA + sideB + sideC;
}

float getAreaOfTrapezium(float majorBase, float minorBase, float height) {
    return ((majorBase + minorBase) * height) / 2;
}