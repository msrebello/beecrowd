#include<stdio.h>

#define PI  3.14159

float areaOfRectangledTriangle(float base, float height);
float areaOfCircle(float radios);
float areaOfTrapezium(float minorBase, float majorBase, float height);
float areaOfSquare(float side);
float areaOfRectangle(float sideA, float sideB);
void showAreas(float rectangleTriangle, float circle, float trapezium, float square, float rectangle);

int main(int argc, char const *argv[]) {
    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);

    showAreas(areaOfRectangledTriangle(A, C),
            areaOfCircle(C),
            areaOfTrapezium(A, B, C),
            areaOfSquare(B), 
            areaOfRectangle(A, B)
    );
    return 0;
}

float areaOfRectangledTriangle(float base, float height) {
    return base * height / 2;
}

float areaOfCircle(float radios) {
    return PI * radios * radios;
}

float areaOfTrapezium(float minorBase, float majorBase, float height) {
    return (minorBase + majorBase) * height / 2;
}

float areaOfSquare(float side) {
    return side * side;
}

float areaOfRectangle(float sideA, float sideB) {
    return sideA * sideB;
}

void showAreas(float rectangleTriangle, float circle, float trapezium, float square, float rectangle) {
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", 
    rectangleTriangle, 
    circle, 
    trapezium, 
    square, 
    rectangle);
}